/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding> {
    NSString * _appURLScheme;
    NSSet * _associatedApplicationIdentifiers;
    NSSet * _associatedWebDomains;
    NSArray * _availableActions;
    NSString * _cobrandName;
    bool  _cobranded;
    NSSet * _deviceInAppPaymentApplications;
    NSSet * _devicePaymentApplications;
    PKPaymentApplication * _devicePrimaryContactlessPaymentApplication;
    PKPaymentApplication * _devicePrimaryInAppPaymentApplication;
    PKPaymentApplication * _devicePrimaryPaymentApplication;
    bool  _hasAssociatedPeerPaymentAccount;
    NSString * _issuerCountryCode;
    NSString * _localizedSuspendedReason;
    NSString * _messagePushTopic;
    NSURL * _messageServiceURL;
    NSSet * _paymentApplications;
    bool  _paymentOptionSelectable;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountNumberSuffix;
    bool  _requiresTransferSerialNumberBasedProvisioning;
    NSString * _sanitizedPrimaryAccountNumber;
    bool  _supportsDPANNotifications;
    bool  _supportsDefaultCardSelection;
    bool  _supportsFPANNotifications;
    bool  _supportsPeerPayment;
    bool  _supportsSerialNumberBasedProvisioning;
    NSString * _transactionPushTopic;
    NSURL * _transactionServiceURL;
}

@property (nonatomic, readonly) unsigned long long activationState;
@property (nonatomic, copy) NSString *appURLScheme;
@property (nonatomic, copy) NSSet *associatedApplicationIdentifiers;
@property (nonatomic, copy) NSSet *associatedWebDomains;
@property (nonatomic, copy) NSArray *availableActions;
@property (nonatomic, copy) NSString *cobrandName;
@property (getter=isCobranded, nonatomic) bool cobranded;
@property (readonly) NSString *deviceAccountIdentifier;
@property (readonly) NSString *deviceAccountNumberSuffix;
@property (nonatomic, retain) NSSet *deviceInAppPaymentApplications;
@property (nonatomic, copy) NSSet *devicePaymentApplications;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryContactlessPaymentApplication;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryInAppPaymentApplication;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (nonatomic, readonly, copy) PKFelicaPassProperties *felicaProperties;
@property (nonatomic) bool hasAssociatedPeerPaymentAccount;
@property (nonatomic, copy) NSString *issuerCountryCode;
@property (nonatomic, copy) NSString *localizedSuspendedReason;
@property (nonatomic, copy) NSString *messagePushTopic;
@property (nonatomic, copy) NSURL *messageServiceURL;
@property (nonatomic, copy) NSSet *paymentApplications;
@property (getter=isPaymentOptionSelectable, nonatomic) bool paymentOptionSelectable;
@property (nonatomic, retain) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountNumberSuffix;
@property (getter=isPrivateLabel, nonatomic, readonly) bool privateLabel;
@property (nonatomic) bool requiresTransferSerialNumberBasedProvisioning;
@property (nonatomic, copy) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic) bool supportsDPANNotifications;
@property (nonatomic) bool supportsDefaultCardSelection;
@property (nonatomic) bool supportsFPANNotifications;
@property (nonatomic) bool supportsPeerPayment;
@property (nonatomic) bool supportsSerialNumberBasedProvisioning;
@property (nonatomic, copy) NSString *transactionPushTopic;
@property (nonatomic, copy) NSURL *transactionServiceURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (unsigned long long)defaultSettings;
+ (id)displayableErrorForAction:(id)arg1 andReason:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_activationStateForApplicationState:(long long)arg1;
- (id)_launchURLForPassAction:(id)arg1;
- (id)_localizedSuspendedReasonForAID:(id)arg1;
- (unsigned long long)activationState;
- (id)addValueURL;
- (id)appURLScheme;
- (id)associatedApplicationIdentifiers;
- (id)associatedWebDomains;
- (id)availableActions;
- (bool)availableForAutomaticPresentationUsingBeaconContext;
- (bool)availableForAutomaticPresentationUsingVASContext;
- (bool)canPerformAction:(id)arg1 unableReason:(unsigned long long*)arg2 displayableError:(id*)arg3;
- (id)cobrandName;
- (unsigned long long)contactlessActivationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceAccountIdentifier;
- (id)deviceAccountNumberSuffix;
- (id)deviceInAppPaymentApplications;
- (id)devicePaymentApplications;
- (id)devicePrimaryContactlessPaymentApplication;
- (id)devicePrimaryInAppPaymentApplication;
- (id)devicePrimaryPaymentApplication;
- (long long)effectiveContactlessPaymentApplicationState;
- (void)encodeWithCoder:(id)arg1;
- (id)felicaProperties;
- (bool)hasAssociatedPeerPaymentAccount;
- (bool)hasContactlessDevicePaymentApplicationsAvailable;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isAccessPass;
- (bool)isCobranded;
- (bool)isDevicePrimaryPaymentApplicationPersonalized;
- (bool)isPaymentOptionSelectable;
- (bool)isPrivateLabel;
- (id)issuerCountryCode;
- (id)localizedSuspendedReason;
- (id)messagePushTopic;
- (id)messageServiceURL;
- (id)notificationCenterTitle;
- (id)paymentApplicationForAID:(id)arg1;
- (id)paymentApplications;
- (id)paymentApplicationsForSecureElementIdentifiers:(id)arg1;
- (id)peerPaymentBalance;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (id)primaryPaymentApplicationForSecureElementIdentifiers:(id)arg1;
- (bool)requiresTransferSerialNumberBasedProvisioning;
- (void)sanitizePaymentApplications;
- (id)sanitizedDeviceAccountNumber;
- (id)sanitizedPrimaryAccountNumber;
- (void)setAppURLScheme:(id)arg1;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setAssociatedWebDomains:(id)arg1;
- (void)setAvailableActions:(id)arg1;
- (void)setCobrandName:(id)arg1;
- (void)setCobranded:(bool)arg1;
- (void)setDeviceInAppPaymentApplications:(id)arg1;
- (void)setDevicePaymentApplications:(id)arg1;
- (void)setDevicePrimaryContactlessPaymentApplication:(id)arg1;
- (void)setDevicePrimaryInAppPaymentApplication:(id)arg1;
- (void)setDevicePrimaryPaymentApplication:(id)arg1;
- (void)setHasAssociatedPeerPaymentAccount:(bool)arg1;
- (void)setIssuerCountryCode:(id)arg1;
- (void)setLocalizedSuspendedReason:(id)arg1;
- (void)setMessagePushTopic:(id)arg1;
- (void)setMessageServiceURL:(id)arg1;
- (void)setPaymentApplications:(id)arg1;
- (void)setPaymentOptionSelectable:(bool)arg1;
- (void)setPeerPaymentBalance:(id)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)setRequiresTransferSerialNumberBasedProvisioning:(bool)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)setSupportsDPANNotifications:(bool)arg1;
- (void)setSupportsDefaultCardSelection:(bool)arg1;
- (void)setSupportsFPANNotifications:(bool)arg1;
- (void)setSupportsPeerPayment:(bool)arg1;
- (void)setSupportsSerialNumberBasedProvisioning:(bool)arg1;
- (void)setTransactionPushTopic:(id)arg1;
- (void)setTransactionServiceURL:(id)arg1;
- (id)sortedPaymentApplications:(id)arg1 ascending:(bool)arg2;
- (bool)supportsDPANNotifications;
- (bool)supportsDefaultCardSelection;
- (bool)supportsFPANNotifications;
- (bool)supportsPeerPayment;
- (bool)supportsSerialNumberBasedProvisioning;
- (bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2;
- (id)transactionPushTopic;
- (id)transactionServiceURL;
- (void)updateDevicePaymentApplicationsWithSecureElementIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkDeviceContactlessPaymentApplications;
- (id)npkDeviceInAppPaymentApplications;
- (bool)npkHasUserSelectableContactlessPaymentApplications;
- (bool)npkHasUserSelectableInAppPaymentApplications;
- (id)npkPreferredContactlessPaymentApplication;
- (id)npkPreferredInAppPaymentApplication;
- (void)npkSetPreferredPaymentApplication:(id)arg1;
- (id)npkSortedDeviceContactlessPaymentApplications;
- (id)npkSortedDeviceInAppPaymentApplications;

@end
