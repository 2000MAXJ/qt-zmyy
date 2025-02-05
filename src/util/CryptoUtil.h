//
// Created by arc on 2022/1/20.
//

#ifndef QT_ZMYY_CRYPTOUTIL_H
#define QT_ZMYY_CRYPTOUTIL_H

#include <QDebug>
#include <QRegExp>
#include <QString>
#include <QByteArray>

#include "../lib/Hex.h"
#include "../lib/Base64.h"
#include "../lib/QtAES/qaesencryption.h"

using namespace std;

static const QByteArray iv = "1234567890000000";

class CryptoUtil {
public:
    /**
     * 加密
     * @param str - 明文
     * @param key  - 密钥
     * @return
     */
    static QString encrypt(const QString &str, const QString &key);

    /**
     * 解密
     * @param str - 密文
     * @param key  - 密钥
     * @return
     */
    static QString decrypt(const QString &str, const QString &key);
};


#endif //QT_ZMYY_CRYPTOUTIL_H
