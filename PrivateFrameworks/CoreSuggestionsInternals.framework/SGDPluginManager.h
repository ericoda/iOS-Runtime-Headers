/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDPluginManager : NSObject {
    NSDictionary * _plugins;
}

+ (void)_processHistoricalDataRequestsForPluginIdentifier:(id)arg1 result:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_processSearchableItem:(id)arg1 userAction:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)processSearchableItem:(id)arg1 completion:(id /* block */)arg2;
- (void)processUserAction:(id)arg1 searchableItem:(id)arg2 completion:(id /* block */)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)setPlugins:(id)arg1;

@end
