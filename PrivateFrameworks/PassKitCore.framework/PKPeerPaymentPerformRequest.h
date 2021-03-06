/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest {
    NSDictionary * _certificates;
    NSData * _paymentData;
    NSString * _quoteIdentifier;
    NSString * _recipientPhoneOrEmail;
}

@property (nonatomic, copy) NSDictionary *certificates;
@property (nonatomic, copy) NSData *paymentData;
@property (nonatomic, copy) NSString *quoteIdentifier;
@property (nonatomic, copy) NSString *recipientPhoneOrEmail;

+ (id)requestWithAuthorizedPeerPaymentQuote:(id)arg1;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4;
- (id)certificates;
- (id)paymentData;
- (id)quoteIdentifier;
- (id)recipientPhoneOrEmail;
- (void)setCertificates:(id)arg1;
- (void)setPaymentData:(id)arg1;
- (void)setQuoteIdentifier:(id)arg1;
- (void)setRecipientPhoneOrEmail:(id)arg1;

@end
