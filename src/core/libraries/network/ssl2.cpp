// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/network/ssl2.h"

namespace Libraries::Ssl2 {

int PS4_SYSV_ABI CA_MGMT_extractKeyBlobEx() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI CA_MGMT_extractPublicKeyInfo() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI CA_MGMT_freeKeyBlob() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI CRYPTO_initAsymmetricKey() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI CRYPTO_uninitAsymmetricKey() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI RSA_verifySignature() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslCheckRecvPending() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslClose() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslConnect() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslCreateConnection() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslCreateSslConnection() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslDeleteConnection() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslDeleteSslConnection() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslDisableOption() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslDisableOptionInternal() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslDisableOptionInternalInsecure() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslDisableVerifyOption() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslEnableOption() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslEnableOptionInternal() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslEnableVerifyOption() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslFreeCaCerts() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslFreeCaList() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslFreeSslCertName() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetAlpnSelected() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

struct OrbisSslCaCerts {
    void* certs;
    u64 num;
    void* pool;
};

int PS4_SYSV_ABI sceSslGetCaCerts(int sslCtxId, OrbisSslCaCerts* certs) {
    // check if it is same as libSceSsl
    LOG_ERROR(Lib_Ssl2, "(DUMMY) called");
    certs->certs = nullptr;
    certs->num = 0;
    certs->pool = nullptr;
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetCaList() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetFingerprint() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetIssuerName() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetMemoryPoolStats() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetNameEntryCount() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetNameEntryInfo() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetNanoSSLModuleId() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetNotAfter() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetNotBefore() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetPeerCert() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetPem() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetSerialNumber() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetSslError() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslGetSubjectName() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslInit(std::size_t poolSize) {
    LOG_ERROR(Lib_Ssl2, "(DUMMY) called poolSize = {}", poolSize);
    // return a value >1
    static int id = 0;
    return ++id;
}

int PS4_SYSV_ABI sceSslLoadCert() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslLoadRootCACert() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslRead() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslRecv() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslReuseConnection() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslSend() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslSetAlpn() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslSetMinSslVersion() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslSetSslVersion() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslSetVerifyCallback() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslTerm() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslUnloadCert() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceSslWrite() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI VLONG_freeVlongQueue() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI Func_22E76E60BC0587D7() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI Func_28F8791A771D39C7() {
    LOG_ERROR(Lib_Ssl2, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterLib(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("Md+HYkCBZB4", "libSceSsl", 1, "libSceSsl", 2, 1, CA_MGMT_extractKeyBlobEx);
    LIB_FUNCTION("9bKYzKP6kYU", "libSceSsl", 1, "libSceSsl", 2, 1, CA_MGMT_extractPublicKeyInfo);
    LIB_FUNCTION("ipLIammTj2Q", "libSceSsl", 1, "libSceSsl", 2, 1, CA_MGMT_freeKeyBlob);
    LIB_FUNCTION("PRWr3-ytpdg", "libSceSsl", 1, "libSceSsl", 2, 1, CRYPTO_initAsymmetricKey);
    LIB_FUNCTION("cW7VCIMCh9A", "libSceSsl", 1, "libSceSsl", 2, 1, CRYPTO_uninitAsymmetricKey);
    LIB_FUNCTION("pBwtarKd7eg", "libSceSsl", 1, "libSceSsl", 2, 1, RSA_verifySignature);
    LIB_FUNCTION("1VM0h1JrUfA", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslCheckRecvPending);
    LIB_FUNCTION("viRXSHZYd0c", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslClose);
    LIB_FUNCTION("zXvd6iNyfgc", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslConnect);
    LIB_FUNCTION("tuscfitnhEo", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslCreateConnection);
    LIB_FUNCTION("P14ATpXc4J8", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslCreateSslConnection);
    LIB_FUNCTION("HJ1n138CQ2g", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslDeleteConnection);
    LIB_FUNCTION("hwrHV6Pprk4", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslDeleteSslConnection);
    LIB_FUNCTION("iLKz4+ukLqk", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslDisableOption);
    LIB_FUNCTION("-WqxBRAUVM4", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslDisableOptionInternal);
    LIB_FUNCTION("w1+L-27nYas", "libSceSsl", 1, "libSceSsl", 2, 1,
                 sceSslDisableOptionInternalInsecure);
    LIB_FUNCTION("PwsHbErG+e8", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslDisableVerifyOption);
    LIB_FUNCTION("m-zPyAsIpco", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslEnableOption);
    LIB_FUNCTION("g-zCwUKstEQ", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslEnableOptionInternal);
    LIB_FUNCTION("po1X86mgHDU", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslEnableVerifyOption);
    LIB_FUNCTION("qIvLs0gYxi0", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslFreeCaCerts);
    LIB_FUNCTION("+DzXseDVkeI", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslFreeCaList);
    LIB_FUNCTION("RwXD8grHZHM", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslFreeSslCertName);
    LIB_FUNCTION("4O7+bRkRUe8", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetAlpnSelected);
    LIB_FUNCTION("TDfQqO-gMbY", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetCaCerts);
    LIB_FUNCTION("qOn+wm28wmA", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetCaList);
    LIB_FUNCTION("brRtwGBu4A8", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetFingerprint);
    LIB_FUNCTION("7whYpYfHP74", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetIssuerName);
    LIB_FUNCTION("-PoIzr3PEk0", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetMemoryPoolStats);
    LIB_FUNCTION("R1ePzopYPYM", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetNameEntryCount);
    LIB_FUNCTION("7RBSTKGrmDA", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetNameEntryInfo);
    LIB_FUNCTION("AzUipl-DpIw", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetNanoSSLModuleId);
    LIB_FUNCTION("xHpt6+2pGYk", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetNotAfter);
    LIB_FUNCTION("Eo0S65Jy28Q", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetNotBefore);
    LIB_FUNCTION("-TbZc8pwPNc", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetPeerCert);
    LIB_FUNCTION("kLB5aGoUJXg", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetPem);
    LIB_FUNCTION("DOwXL+FQMEY", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetSerialNumber);
    LIB_FUNCTION("0XcZknp7-Wc", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetSslError);
    LIB_FUNCTION("dQReuBX9sD8", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslGetSubjectName);
    LIB_FUNCTION("hdpVEUDFW3s", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslInit);
    LIB_FUNCTION("Ab7+DH+gYyM", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslLoadCert);
    LIB_FUNCTION("3-643mGVFJo", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslLoadRootCACert);
    LIB_FUNCTION("jltWpVKtetg", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslRead);
    LIB_FUNCTION("hi0veU3L2pU", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslRecv);
    LIB_FUNCTION("50R2xYaYZwE", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslReuseConnection);
    LIB_FUNCTION("p5bM5PPufFY", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslSend);
    LIB_FUNCTION("TL86glUrmUw", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslSetAlpn);
    LIB_FUNCTION("QWSxBzf6lAg", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslSetMinSslVersion);
    LIB_FUNCTION("bKaEtQnoUuQ", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslSetSslVersion);
    LIB_FUNCTION("E4a-ahM57QQ", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslSetVerifyCallback);
    LIB_FUNCTION("0K1yQ6Lv-Yc", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslTerm);
    LIB_FUNCTION("UQ+3Qu7v3cA", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslUnloadCert);
    LIB_FUNCTION("iNjkt9Poblw", "libSceSsl", 1, "libSceSsl", 2, 1, sceSslWrite);
    LIB_FUNCTION("wcVuyTUr5ys", "libSceSsl", 1, "libSceSsl", 2, 1, VLONG_freeVlongQueue);
    LIB_FUNCTION("IuduYLwFh9c", "libSceSsl", 1, "libSceSsl", 2, 1, Func_22E76E60BC0587D7);
    LIB_FUNCTION("KPh5GncdOcc", "libSceSsl", 1, "libSceSsl", 2, 1, Func_28F8791A771D39C7);
};

} // namespace Libraries::Ssl2