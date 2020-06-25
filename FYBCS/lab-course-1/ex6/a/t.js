//function to remove contact

var searchRecordToRemove = function (data, callback) {
    let contactName = data.name;
    let contactNumber = data.number;
    sql.close();
    sql.connect(config, (err, conn) => {
        if (err) {
            console.log('Error in connection:', err);
        }
        else {
            var request = new sql.Request();
            request.query(`select cont_id from contact_details where Name ='${contactName}'`, (e, record) => {
                if (e) {
                    console.log('Error in fetching records:', e);
                }
                else {
                    if (record.recordset.length != 0) {
                        let cont_id = record;//modify
                        var req1 = new sql.Request();
                        req1.query(`select * from contactNumber where cont_id='${cont_id}'`, (err1, records) => {
                            if (err1) {

                            }
                            else {
                                if (record.recordset.length > 1) {
                                    var req4 = new sql.Request();
                                    req4.query(`delete from contactNumber where cont_id='${cont_id}'`, (error, record4) => {
                                        if (error) {

                                        }
                                        else {
                                            callback(null, { msg: 'Records deleted successfully' });
                                        }
                                    })
                                } else {
                                    var req2 = new sql.Request();
                                    req2.query(`delete from contactNumber where cont_id='${cont_id}'`, (err2, record2) => {
                                        if (err2) {
                                            console.log('Error in deletion of records:', err2);
                                        }
                                        else {
                                            var req3 = new sql.Request();
                                            req3.query(`delete from contact_details where cont_id='${cont_id}'`, (err3, record3) => {
                                                if (err3) {
                                                    console.log('Error:', err3);
                                                }
                                                else {
                                                    callback(null, { msg: 'Records deleted successfully' });
                                                }
                                            })
                                        }
                                    })
                                }
                            }
                        })
                    }
                    else {
                        callback({ msg: 'Invalid user' }, null);

                    }
                }
            })
        }
    })
}