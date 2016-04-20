/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding> {

	NSString* _identityInfo;
	NSString* _serviceIdentityInfo;
	NSMutableDictionary* _pcsInfoByZoneID;
	NSMutableArray* _notFoundZoneIDs;

}

@property (nonatomic,retain) NSString * identityInfo;                            //@synthesize identityInfo=_identityInfo - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentityInfo;                     //@synthesize serviceIdentityInfo=_serviceIdentityInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsInfoByZoneID;              //@synthesize pcsInfoByZoneID=_pcsInfoByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableArray * notFoundZoneIDs;                   //@synthesize notFoundZoneIDs=_notFoundZoneIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)identityInfo;
-(NSString *)serviceIdentityInfo;
-(void)setNotFoundZoneIDs:(NSMutableArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)pcsInfoByZoneID;
-(void)setPcsInfoByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setIdentityInfo:(NSString *)arg1 ;
-(void)setServiceIdentityInfo:(NSString *)arg1 ;
-(NSMutableArray *)notFoundZoneIDs;
@end

