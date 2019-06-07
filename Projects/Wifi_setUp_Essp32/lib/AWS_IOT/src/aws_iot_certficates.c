/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIE0zCCA7ugAwIBAgIQGNrRniZ96LtKIVjNzGs7SjANBgkqhkiG9w0BAQUFADCB\n\
yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n\
ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n\
U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n\
ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n\
aG9yaXR5IC0gRzUwHhcNMDYxMTA4MDAwMDAwWhcNMzYwNzE2MjM1OTU5WjCByjEL\n\
MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n\
ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJpU2ln\n\
biwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxWZXJp\n\
U2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0aG9y\n\
aXR5IC0gRzUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvJAgIKXo1\n\
nmAMqudLO07cfLw8RRy7K+D+KQL5VwijZIUVJ/XxrcgxiV0i6CqqpkKzj/i5Vbex\n\
t0uz/o9+B1fs70PbZmIVYc9gDaTY3vjgw2IIPVQT60nKWVSFJuUrjxuf6/WhkcIz\n\
SdhDY2pSS9KP6HBRTdGJaXvHcPaz3BJ023tdS1bTlr8Vd6Gw9KIl8q8ckmcY5fQG\n\
BO+QueQA5N06tRn/Arr0PO7gi+s3i+z016zy9vA9r911kTMZHRxAy3QkGSGT2RT+\n\
rCpSx4/VBEnkjWNHiDxpg8v+R70rfk/Fla4OndTRQ8Bnc+MUCH7lP59zuDMKz10/\n\
NIeWiu5T6CUVAgMBAAGjgbIwga8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8E\n\
BAMCAQYwbQYIKwYBBQUHAQwEYTBfoV2gWzBZMFcwVRYJaW1hZ2UvZ2lmMCEwHzAH\n\
BgUrDgMCGgQUj+XTGoasjY5rw8+AatRIGCx7GS4wJRYjaHR0cDovL2xvZ28udmVy\n\
aXNpZ24uY29tL3ZzbG9nby5naWYwHQYDVR0OBBYEFH/TZafC3ey78DAJ80M5+gKv\n\
MzEzMA0GCSqGSIb3DQEBBQUAA4IBAQCTJEowX2LP2BqYLz3q3JktvXf2pXkiOOzE\n\
p6B4Eq1iDkVwZMXnl2YtmAl+X6/WzChl8gGqCBpH3vn5fJJaCGkgDdk+bW48DW7Y\n\
5gaRQBi5+MHt39tBquCWIMnNZBU4gcmU7qKEKQsTb47bDN0lAtukixlE0kF6BWlK\n\
WE9gyn6CagsCqiUXObXbf+eEZSqVir2G3l6BFoMtEMze/aiCKm0oHw0LxOXnGiYZ\n\
4fQRbxC1lfznQgUy286dUV4otp6F01vvpX1FQHKOtw5rDgb7MzVIcbidJ4vEZV8N\n\
hnacRHr2lVz2XTIIM6RUthg/aFzyQkqFOFSDX9HoLPKsEdao7WNq\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVAKXBK0+v7vI/7VWO3yzTWz2YMUPRMA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA1MjExMjE2\n\
MTJaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC8cv8qfWIDqCWqZ6X8\n\
MCxUJhoyZ9LWcu9eedmZfvVe0Mi2JKd0YO5GnDJfEtqfNFvSIgGrityMhX0TEM51\n\
ZCZ9PmmtDDJrDGk/3nH3FzD+1ouXqhf6TWZki/99rStn5KvUatUHO+X4gagM11vn\n\
oNn074ezGrLKqxFNdsXB/ARvwGxuThe3qkkDYyYE/MLZHY+PtqDjL213MtDouBto\n\
ATR8+XfdKr4jHDM09tn/GTGbwj4pB3DFs2W3qgpG5B0L43zTLwzxfl5WM5EnaE5u\n\
YSvHfIzY74MZTmtYseuGCzcG4xaYU6RVuvghFEqWzzX3KT4GuMGa5sXMAIRk9/sj\n\
qxrzAgMBAAGjYDBeMB8GA1UdIwQYMBaAFCS8FdBCsSjdPZys6sy2zzpmd4LDMB0G\n\
A1UdDgQWBBS2rcgBybnKYsYyxraD33hFmmYGYzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEACrDcKsduvrwLYIXeN7vo/fCm\n\
+ViZIklQfifJKMGR5qY0zaE+LU2KNDqckxR9kcptUCv7XWpZe9oKo5U1OEYo5nA0\n\
Kyeh6756JoEZ2n725corgKkxssCdLkZCQidQmnZGEGJPewYoxyJVX7IdAvwR4uQW\n\
1Pu2BWR/tpMv/STDgksBuiC4/Zy8yvW603lzagaaAQNb6Pck5/XaDxNZjPUJpsIn\n\
G0RCbEB4cFoa+HYonToOTx8Gb2STfiWUva3AvYxfi6mfq3ZsJxP1s6kt4FfoI5eY\n\
tHAqjTO8d3VdNFP8vhs6qp9J0DefuNrGIcwV3sr0sc55HckQfpg0HX9SxjMdVQ==\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"----BEGIN RSA PRIVATE KEY-----\n\
MIIEpQIBAAKCAQEAvHL/Kn1iA6glqmel/DAsVCYaMmfS1nLvXnnZmX71XtDItiSn\n\
dGDuRpwyXxLanzRb0iIBq4rcjIV9ExDOdWQmfT5prQwyawxpP95x9xcw/taLl6oX\n\
+k1mZIv/fa0rZ+Sr1GrVBzvl+IGoDNdb56DZ9O+HsxqyyqsRTXbFwfwEb8Bsbk4X\n\
t6pJA2MmBPzC2R2Pj7ag4y9tdzLQ6LgbaAE0fPl33Sq+IxwzNPbZ/xkxm8I+KQdw\n\
xbNlt6oKRuQdC+N80y8M8X5eVjORJ2hObmErx3yM2O+DGU5rWLHrhgs3BuMWmFOk\n\
Vbr4IRRKls819yk+BrjBmubFzACEZPf7I6sa8wIDAQABAoIBADyOp7i7ufd63T+5\n\
NvmncVdJNznjazlGje1KMsbEqYzigt0lQjp/u5ItN3Kd2Gs4pBkOnILHiMAPVXX+\n\
/Jl0qXmtyL+3H6yOvHOtw+mnJjN+NjVyj2n73V+KLXvxXfVw4lbMTdCZSvlkkOAv\n\
hHUWl3PCVVUUy0edWV4PQNVpavON0Q822Wk+FaemrOVrCbgKOdy5oCX5XgSa8jja\n\
7esY0X9a8zDKhwOeBkiSlP56K2/e1T45uwyC246GmlgNH45YZhfQbnzsY9ZRt/24\n\
4ge05q0xW+4K2wVow7aUcX5sThLOUQMWtN5OB2CsQyZ6wA1CFbBgTyOXNRubPMP2\n\
aSuDiGECgYEA4nsjOZ27N+CrYodEiJ4MPGxyrbI9l3eY4Y9E+Or5imA7jIVJYgnz\n\
7uZmHW/ZOu8UCsex1r9uz2/5uN8ZnnoyC+SBG55c8bQEIJANvGeKZaipK/UDGOW2\n\
E5PtOiZ9qwcpuszDskg3yEPJpQ6ni0Vx+QOskk89aAZfUnPE3BT/4qUCgYEA1QLf\n\
sFiQ/q+4cA2MFpnuiUSUEez//D2h7GLFd+Tz3iMCQJUf17hu/XrymHfrxh++VHrG\n\
1D9gcnoJMLLSnoVX68BcFQvQdTT1jOWHZ2CPtO5ZIGxsR8Xz71WdQjwiLmkV13mW\n\
XUEQ832OrBx7BkBNFvwR+g36p8pj+WdELJmHC7cCgYEAxgsfdlZzTB1uQK5AQ6bQ\n\
1FWQwkrGiRjP2w3JJlFy/InCCNLUpKJHaHSYfs07i8lcIUEWRc8IOuST3hFY+beo\n\
47VhIKGObN0ZbtAI8uMnplWh+Qo7Nx5H5T7Jhrv50ABngS1lQxTbkoeUYH08DREg\n\
5LtNwHMCI2DPIe6SClFioPECgYEAgDgHn+Xf+X6andB5x80Gudfu7U9k01fiFSFr\n\
Tf0iEk+udmONVFOvc6NDTiW5ZXwMHFv/PRmdG6t7xrWNdGA9iSo0A3MmGrczK4mq\n\
VL7aIgXq3kqFbzqn2CQH0ivSQ29790U4DpAw/PBSJiXKo/umq7Q1ufgaLk/0l9bi\n\
QZp0oMcCgYEA1/333f8mVkL9I/Cr5h26vu0R8gNjjf3gugQM/yklSEyQvLTwsYys\n\
hDF1+UkCiOWGUxiM2iJwrwZIld9ikTBlg3HhN9Wft3Yiniw9TjGhitIWKiOTp9/d\n\
suTQgdx5hCQZlxNSdGDul5Tntmt6WAZutXO7KoeHiRSRAbRfGT5eouU=\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
