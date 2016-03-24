/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODBWriter : NSObject {
    BOOL _canCreateDebugTable;
    BOOL _closed;
    unsigned long long _databaseSize;
    struct sqlite3 { } *_db;
    BOOL _defunct;
    NSString *_devicePostureCountry;
    NSString *_devicePostureRegion;
    struct sqlite3_stmt { } *_editionDelete;
    struct sqlite3_stmt { } *_editionInvalidate;
    struct sqlite3_stmt { } *_editionInvalidateAll;
    void *_editionMap;
    struct sqlite3_stmt { } *_editionQuery;
    struct sqlite3_stmt { } *_editionUpdate;
    long long _evictionRowsThreshold;
    unsigned int _expirationRecordCount;
    struct { unsigned int x1; double x2; } *_expirationRecords;
    double _lastCheckedGeneralExpiration;
    long long _lastRowID;
    unsigned long long _maxDatabaseSize;
    NSString *_path;
    unsigned int _pendingWriteBytes;
    BOOL _preloading;
    struct sqlite3_stmt { } *_sizeQuery;
    unsigned int _tileCacheMaximumWriteBytes;
    unsigned int _tileCacheMaximumWriteCount;
    unsigned int _tileCacheMinimumWriteBytes;
    unsigned int _tileCacheMinimumWriteCount;
    struct sqlite3_stmt { } *_tileDelete;
    struct sqlite3_stmt { } *_tileInsert;
    struct sqlite3_stmt { } *_tileSize;
    NSMutableSet *_uncommitedWriteSet;
    struct sqlite3_stmt { } *_versionInsert;
    struct sqlite3_stmt { } *_versionQuery;
    NSMutableArray *_writeList;
    NSLock *_writeListLock;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property BOOL closed;
@property (nonatomic, readonly) unsigned long long databaseSize;
@property (nonatomic, readonly) NSString *devicePostureCountry;
@property (nonatomic, readonly) NSString *devicePostureRegion;
@property (nonatomic) unsigned long long maxDatabaseSize;
@property (nonatomic, readonly) NSString *path;

- (void)_assertDatabaseSize;
- (void)_closeDB;
- (void)_countryChanged:(id)arg1;
- (void)_createTables;
- (unsigned long long)_dbFileSize;
- (void)_deleteKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)_deviceLocked;
- (void)_dropWritesOnFloor:(id)arg1;
- (void)_editionUpdate:(id)arg1;
- (void)_evict;
- (unsigned long long)_freeableDiskSpace;
- (void)_localeChanged:(id)arg1;
- (void)_openDBForceRecreate:(BOOL)arg1;
- (void)_openIfNecessary;
- (void)_performWrites:(BOOL)arg1;
- (void)_prepareStatements;
- (void)_printDBStatus:(const char *)arg1;
- (BOOL)_readEditions;
- (void)_setCurrentDevicePostureToCountry:(id)arg1 region:(id)arg2;
- (void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(BOOL)arg2;
- (BOOL)_tileSetExpires:(unsigned int)arg1;
- (void)_updateEdition:(unsigned int)arg1 forTileset:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(BOOL)arg4;
- (void)_updateSize;
- (void)_writeEntry:(id)arg1;
- (void)_writeVersionForCountry:(id)arg1 region:(id)arg2;
- (void)addData:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)calculateFreeableSizeWithHandler:(id /* block */)arg1 onQueue:(id)arg2;
- (BOOL)closed;
- (unsigned long long)databaseSize;
- (void)dealloc;
- (void)deleteData:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)devicePostureCountry;
- (id)devicePostureRegion;
- (void)endPreloadSession;
- (void)evaluateDevicePostureAgainstCurrentManifest;
- (void)flushPendingWrites;
- (id)initWithPath:(id)arg1;
- (unsigned long long)maxDatabaseSize;
- (id)path;
- (id)pendingWriteForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)pendingWritesForKeys:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)prepareSingleStatement:(struct sqlite3_stmt {}**)arg1 forSql:(id)arg2;
- (void)setClosed:(BOOL)arg1;
- (void)setExpirationRecords:(struct { unsigned int x1; double x2; }*)arg1 count:(unsigned int)arg2;
- (void)setMaxDatabaseSize:(unsigned long long)arg1;
- (void)shrinkBySize:(unsigned long long)arg1 callback:(id /* block */)arg2 onQueue:(id)arg3;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id /* block */)arg2 onQueue:(id)arg3;

@end
