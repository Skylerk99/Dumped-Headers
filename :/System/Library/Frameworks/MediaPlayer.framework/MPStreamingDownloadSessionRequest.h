/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaPlaybackItemMetadata, NSString;

@interface MPStreamingDownloadSessionRequest : NSObject {

	BOOL _shouldStartLeaseSession;
	BOOL _shouldUseAccountLessStreaming;
	MPMediaPlaybackItemMetadata* _playbackItemMetadata;
	unsigned long long _preferredAssetQuality;
	NSString* _buyParameters;
	long long _endpointType;
	long long _storeAdamID;

}

@property (nonatomic,retain) MPMediaPlaybackItemMetadata * playbackItemMetadata;              //@synthesize playbackItemMetadata=_playbackItemMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long preferredAssetQuality;                        //@synthesize preferredAssetQuality=_preferredAssetQuality - In the implementation block
@property (assign,nonatomic) BOOL shouldStartLeaseSession;                                    //@synthesize shouldStartLeaseSession=_shouldStartLeaseSession - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAccountLessStreaming;                              //@synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters;                                 //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) long long endpointType;                                        //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                                         //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) BOOL usesSubscriptionLease; 
-(BOOL)usesSubscriptionLease;
-(long long)endpointType;
-(long long)storeAdamID;
-(MPMediaPlaybackItemMetadata *)playbackItemMetadata;
-(void)setPlaybackItemMetadata:(MPMediaPlaybackItemMetadata *)arg1 ;
-(void)setPreferredAssetQuality:(unsigned long long)arg1 ;
-(BOOL)shouldUseAccountLessStreaming;
-(void)setShouldUseAccountLessStreaming:(BOOL)arg1 ;
-(void)setShouldStartLeaseSession:(BOOL)arg1 ;
-(unsigned long long)preferredAssetQuality;
-(BOOL)shouldStartLeaseSession;
-(NSString *)buyParameters;
@end

