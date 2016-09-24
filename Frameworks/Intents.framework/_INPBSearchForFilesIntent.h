/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForFilesIntent : PBCodable <NSCopying> {
    _INPBString * _appId;
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int entityType : 1; 
        unsigned int scope : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSMutableArray * _properties;
    int  _scope;
    _INPBString * _scopeEntityName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *appId;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, readonly) BOOL hasAppId;
@property (nonatomic, readonly) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasScope;
@property (nonatomic, readonly) BOOL hasScopeEntityName;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic) int scope;
@property (nonatomic, retain) _INPBString *scopeEntityName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)propertiesType;

- (void).cxx_destruct;
- (void)addProperties:(id)arg1;
- (id)appId;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityName;
- (int)entityType;
- (BOOL)hasAppId;
- (BOOL)hasEntityName;
- (BOOL)hasEntityType;
- (BOOL)hasIntentMetadata;
- (BOOL)hasScope;
- (BOOL)hasScopeEntityName;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (id)propertiesAtIndex:(unsigned int)arg1;
- (unsigned int)propertiesCount;
- (BOOL)readFrom:(id)arg1;
- (int)scope;
- (id)scopeEntityName;
- (void)setAppId:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(BOOL)arg1;
- (void)setHasScope:(BOOL)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setScope:(int)arg1;
- (void)setScopeEntityName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end