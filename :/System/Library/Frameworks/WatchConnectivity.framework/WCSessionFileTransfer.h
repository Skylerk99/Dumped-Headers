/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WCSessionFile, NSString, NSError;

@interface WCSessionFileTransfer : NSObject <NSSecureCoding> {

	BOOL _transferring;
	WCSessionFile* _file;
	NSString* _transferIdentifier;
	NSError* _transferError;

}

@property (nonatomic,readonly) WCSessionFile * file;                               //@synthesize file=_file - In the implementation block
@property (assign,getter=isTransferring,nonatomic) BOOL transferring;              //@synthesize transferring=_transferring - In the implementation block
@property (copy) NSString * transferIdentifier;                                    //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (retain) NSError * transferError;                                        //@synthesize transferError=_transferError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)setTransferIdentifier:(NSString *)arg1 ;
-(NSString *)transferIdentifier;
-(BOOL)isTransferring;
-(void)setTransferring:(BOOL)arg1 ;
-(NSError *)transferError;
-(void)setTransferError:(NSError *)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(WCSessionFile *)file;
@end

