/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface DAResolvedRecipient : NSObject {

	long long _status;
	long long _certificatesStatus;
	long long _availabilityStatus;
	NSString* _mergedFreeBusy;
	NSMutableDictionary* _mResolvedEmailToX509Certs;

}

@property (assign,nonatomic) long long status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long certificatesStatus;                                 //@synthesize certificatesStatus=_certificatesStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * resolvedEmailToX509Certs; 
@property (assign,nonatomic) long long availabilityStatus;                                 //@synthesize availabilityStatus=_availabilityStatus - In the implementation block
@property (nonatomic,retain) NSString * mergedFreeBusy;                                    //@synthesize mergedFreeBusy=_mergedFreeBusy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mResolvedEmailToX509Certs;              //@synthesize mResolvedEmailToX509Certs=_mResolvedEmailToX509Certs - In the implementation block
-(id)description;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSMutableDictionary *)mResolvedEmailToX509Certs;
-(void)setMResolvedEmailToX509Certs:(NSMutableDictionary *)arg1 ;
-(void)setCertificatesStatus:(long long)arg1 ;
-(long long)certificatesStatus;
-(void)addCert:(id)arg1 forEmailAddress:(id)arg2 ;
-(void)setAvailabilityStatus:(long long)arg1 ;
-(long long)availabilityStatus;
-(NSString *)mergedFreeBusy;
-(void)setMergedFreeBusy:(NSString *)arg1 ;
-(NSDictionary *)resolvedEmailToX509Certs;
@end

