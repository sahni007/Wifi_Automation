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
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVAOitSM9Xk1yYNueYHQx2c92R4YREMA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA2MDMwODI3\n\
MjhaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCtr+GNUa790YOOmv/l\n\
UtpnWyrH/JaiStdI7zPUH6h9LLcZ8Mjc3LvQpcDgSirfB67UOgvyDMelBXHIeiAc\n\
U4UEHi7otNbYGbyuvQyw/uPrDjm5ycL3BiPVsjzrNHi8OfcRsHO6XePRy2OMwSoP\n\
We9LNwip4eQKJz9mU3HxD5Dd5twA0Owpk9PO/q7tXe7T7hs9AJpvQRhkMvTZW1B8\n\
Nq8G3oQxtTckkjPfKZbIXJV7yzqmfyjP1fMbVRCrrbi72HYGJ5CQS3OkpaKlJaMq\n\
swKK2M39az0XXZWYlDEI9/q0QAq+ycS29GOPTjFHj6nGeX9q9Yz1Zv04L4Ts35wb\n\
vLgXAgMBAAGjYDBeMB8GA1UdIwQYMBaAFPqplJ63QP4gs6NwbCQl9OXbBch+MB0G\n\
A1UdDgQWBBSKV7AJYswlkSNOeC4zrsIBly7t8TAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAkA5PNJtPo9MCq2hDjuahTqIx\n\
tAGxy9C0m128YyDvqCPO0VyvNWGFL6pXAWF8i1hF4kW7R5X1zPY9ZRZ0c7uyorVU\n\
IZpZwNY1d1QOTJ8qRJeSq+SMbYM21Tj6hluNqeNxs8x2sMltoQketmQ57WjrzRER\n\
l23OuWqn4wLOBa5HSR5hR1OtRCphrki8QQL0YDgA3wPk5WQPtMwcJscdH2Z0Djwy\n\
fvIzoPL6jJMj58ADFhW95B/eZgz+7Hii/3+O+GHhlph5xg1YWp+LynqS+9uHmw4sn\n\
qEoMZbGcejcpqs7bxUFooCu+FCbfsUShwaN33FS9emw4k/LuBSZcGrrxUXUPLw==\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpAIBAAKCAQEAra/hjVGu/dGDjpr/5VLaZ1sqx/yWokrXSO8z1B+ofSy3GfDI\n\
3Ny70KXA4Eoq3weu1DoL8gzHpQVxyHogHFOFBB4u6LTW2Bm8rr0MsP7j6w45ucnC\n\
9wYj1bI86zR4vDn3EbBzul3j0ctjjMEqD1nvSzcIqeHkCic/ZlNx8Q+Q3ebcANDs\n\
KZPTzv6u7V3u0+4bPQCab0EYZDL02VtQfDavBt6EMbU3JJIz3ymWyFyVe8s6pn8o\n\
z9XzG1UQq624u9h2BieQkEtzpKWipSWjKrMCitjN/Ws9F12VmJQxCPf6tEAKvsnE\n\
tvRjj04xR4+pxnl/avWM9Wb9OC+E7N+cG7y4FwIDAQABAoIBAQCUQ3c+s2O1t4ud\n\
yCJ5F+joIaK7ZJsRnuF3mPmdMgkaEXmb4zcTkjmhOl0TGTzPdjd/Yq2fydkCvUsL\n\
33RZudHqWfmhG/3qKs4uO6MB1BOrK1GLjvem9s7QNH5cKUaHJtQJfZ7MkClRhVVN\n\
afcFc7gZdLkoi3OmVyp/puu045y+TlKWkWMpb6d5SoX44Jfxw4qyBWFeCCn8sgGw\n\
rX9uNyb1BLq0dESl4Vh+rvf5Hs6SFST8s/7bJacbyzxhtwy+1a1M15srE8JAOq7c\n\
TqrMwujUePFgXGB/lp5Foo1B2Gx4Ldcn0xfuU7siosCWUcdjNx6CWK0jk1+d7C25\n\
7VtWKVNBAoGBAOPxv1G8XamLl0XTOPh3Bf5ffYt3M38O6lnKU2PFhECgostL2KZ0\n\
CME8ah8Xu1boiEmNP347CIMid7+9YGCgr3l0OwFNN5eXkqreeoEL48lMT/j4Qg/W\n\
541A7DsCl/+j/0NAx0sFION1zq5gnf481LzQ3TvefU0CbNNGVsP9aKblAoGBAMMQ\n\
jS8dk4Lsc2J/QykEhNkUDr0+hD7aOcltxrmqQbpg6INx2vxqzsp1Ud6Fgtx2LX5l\n\
rokpe9Pny2Cc8YBr1UgeEuNgALnN5xQ5oQiWv3ThsDtxh+oYMj6KGSPNKswE95pU\n\
HqooPIWr5z5nUUz+LH6v9CZ+sbyT3MdeJXdGLFdLAoGAWSd3vh9fvu2jKCNaWAwt\n\
ovV0ZDUmRh7uWFpDTXW2qZRqt/sdbNVbi0D2/NxKYM6oZ6RAXj32sVus3KjUZlbS\n\
6z0jyvmJsdgN/Jjx70FYQaaAbQ+kvw8+F8h53QbBrrJVJ9fRWy1RVMYCJcASa5sd\n\
VhCXR1BZT+KP7/7F9vhJk2UCgYEAnzU5JoVrSmaW3oOkWywXCd53ETqfUXVnyOHS\n\
WuN9dhN2cyJQa8j5MwGCaq5p2mqSQyHWzJiROqlrs1UlP33DvHLfU7mdnglSW42V\n\
w57WcR1ra3kER6qsB6NLVY81KQO827dgt9zTWP6vZJ2LG94wjs4p5eluQ84jWo2a\n\
4rjho/UCgYBjL93yVhdTRNrxLvyqYOsauTH/C+vSDCm8jLeMNpUeKVdWU6I0xH7t\n\
ysdxMmDrwrVvRNSMDsxYdqTdNoYwOOhaXUBEeklkX9nQnBi3/Ap6XjG6b81lGDLw\n\
fd6cvy6AGmsOm5vI6NIUBJd0LtZzEM0GhlO67TjRV6e2GlbF0sbDtQ==\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
