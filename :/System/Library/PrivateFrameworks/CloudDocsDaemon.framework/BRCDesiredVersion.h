/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCVersion.h>
#import <libobjc.A.dylib/PQLBindable.h>

@class NSError, NSString;

@interface BRCDesiredVersion : BRCVersion <PQLBindable> {

	SCD_Union_BR17 _flags;
	NSError* _downloadError;
	NSString* _serverName;

}

@property (nonatomic,retain) NSError * downloadError;               //@synthesize downloadError=_downloadError - In the implementation block
@property (nonatomic,readonly) NSString * serverName;               //@synthesize serverName=_serverName - In the implementation block
@property (assign,nonatomic) unsigned options; 
@property (nonatomic,readonly) BOOL isFault; 
@property (nonatomic,readonly) BOOL wantsContent; 
@property (nonatomic,readonly) BOOL userInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)downloadError;
-(BOOL)isFault;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)wantsContent;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(BOOL)userInitiated;
-(id)initWithDesiredVersion:(id)arg1 ;
-(id)initWithServerVersion:(id)arg1 serverName:(id)arg2 ;
-(BOOL)isStillValidForEtag:(id)arg1 ;
-(NSString *)serverName;
@end

