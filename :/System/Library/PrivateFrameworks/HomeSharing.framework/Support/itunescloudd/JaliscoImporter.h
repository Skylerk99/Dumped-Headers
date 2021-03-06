/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CloudLibraryConnection;

@interface JaliscoImporter : NSObject {

	BOOL _isCancelled;
	float _progress;
	CloudLibraryConnection* _connection;

}

@property (nonatomic,readonly) CloudLibraryConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                 //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) float progress;                                   //@synthesize progress=_progress - In the implementation block
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(BOOL)includeFlavors;
-(unsigned)onDiskRevision;
-(void)importTracksUpToRevision:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)setProgress:(float)arg1 ;
-(BOOL)isCancelled;
-(float)progress;
-(CloudLibraryConnection *)connection;
-(id)handleResponse:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)includeHiddenItems;
@end

