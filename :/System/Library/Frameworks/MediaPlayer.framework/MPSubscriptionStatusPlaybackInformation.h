/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSubscriptionStatusPlaybackInformation : NSObject {

	long long _accountSubscriptionStatus;
	long long _carrierBundlingStatus;
	BOOL _definitiveInformation;
	BOOL _hasPlaybackCapability;
	BOOL _requiresCarrierManualVerification;
	BOOL _shouldUseLease;
	BOOL _shouldUseAccountLessStreaming;

}

@property (getter=isDefinitiveInformation,nonatomic,readonly) BOOL definitiveInformation;              //@synthesize definitiveInformation=_definitiveInformation - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackCapability;                                             //@synthesize hasPlaybackCapability=_hasPlaybackCapability - In the implementation block
@property (nonatomic,readonly) BOOL requiresCarrierManualVerification;                                 //@synthesize requiresCarrierManualVerification=_requiresCarrierManualVerification - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLease;                                                    //@synthesize shouldUseLease=_shouldUseLease - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseAccountLessStreaming;                                     //@synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming - In the implementation block
-(BOOL)shouldUseLease;
-(BOOL)hasPlaybackCapability;
-(id)initWithSubscriptionStatus:(id)arg1 ;
-(BOOL)isDefinitiveInformation;
-(BOOL)shouldUseAccountLessStreaming;
-(BOOL)requiresCarrierManualVerification;
-(id)description;
@end

