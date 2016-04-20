/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class ML3DatabaseConnection, NSLock, ML3MusicLibrary, NSUUID, MLDClient;

@interface MLDActiveTransaction : NSObject <NSLocking> {

	ML3DatabaseConnection* _connection;
	NSLock* _lock;
	BOOL _terminable;
	BOOL _inUseByOperation;
	BOOL _readOnly;
	ML3MusicLibrary* _library;
	NSUUID* _identifier;
	MLDClient* _client;
	double _lastUsedTime;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection; 
@property (nonatomic,readonly) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) MLDClient * client;                              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) double lastUsedTime;                               //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) BOOL terminable;                                   //@synthesize terminable=_terminable - In the implementation block
@property (assign,nonatomic) BOOL inUseByOperation;                             //@synthesize inUseByOperation=_inUseByOperation - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                   //@synthesize readOnly=_readOnly - In the implementation block
-(void)setInUseByOperation:(BOOL)arg1 ;
-(void)updateLastUsed;
-(id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3 ;
-(void)setTerminable:(BOOL)arg1 ;
-(id)_relinquishConnection;
-(BOOL)terminable;
-(BOOL)inUseByOperation;
-(void)setReadOnly:(BOOL)arg1 ;
-(ML3MusicLibrary *)library;
-(id)init;
-(id)description;
-(NSUUID *)identifier;
-(void)lock;
-(void)unlock;
-(ML3DatabaseConnection *)connection;
-(double)lastUsedTime;
-(void)setLastUsedTime:(double)arg1 ;
-(MLDClient *)client;
-(BOOL)isReadOnly;
@end

