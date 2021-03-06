/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse {
    NSArray * _acceptableDocuments;
    bool  _complete;
    NSString * _contextLocalizedDescription;
    NSString * _contextLocalizedTitle;
    NSArray * _encryptionCertificates;
    NSString * _encryptionVersion;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSArray * _requiredFieldsByPage;
}

@property (nonatomic, readonly) NSArray *acceptableDocuments;
@property (nonatomic, readonly) bool complete;
@property (nonatomic, readonly, copy) NSString *contextLocalizedDescription;
@property (nonatomic, readonly, copy) NSString *contextLocalizedTitle;
@property (nonatomic, readonly, copy) NSArray *encryptionCertificates;
@property (nonatomic, readonly, copy) NSString *encryptionVersion;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSArray *requiredFieldsByPage;

- (void).cxx_destruct;
- (id)acceptableDocuments;
- (bool)complete;
- (id)contextLocalizedDescription;
- (id)contextLocalizedTitle;
- (id)encryptionCertificates;
- (id)encryptionVersion;
- (id)initWithData:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)requiredFieldsByPage;

@end
