/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMRemoteLoginHandler : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    HMRemoteLoginAnisetteDataProvider * _anisetteDataProvider;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _currentSessionID;
    HMDelegateCaller * _delegateCaller;
    ACAccount * _loggedInAccount;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSString *currentSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACAccount *loggedInAccount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isSessionInProgress, nonatomic, readonly) bool sessionInProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callAccountUpdateDelegate:(id)arg1;
- (void)_companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryProxiedDevice:(id /* block */)arg1;
- (void)_signout:(id /* block */)arg1;
- (id)accessory;
- (id)anisetteDataProvider;
- (id)clientQueue;
- (void)companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)currentSessionID;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSessionInProgress;
- (id)loggedInAccount;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)queryProxiedDevice:(id /* block */)arg1;
- (void)registerForMessages;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentSessionID:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setLoggedInAccount:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)signout:(id /* block */)arg1;
- (id)uniqueIdentifier;
- (id)uuid;

@end
