/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADInterstitialAdDelegate <NSObject>
@optional
-(void)interstitialAdWillLoad:(id)arg1;
-(void)interstitialAdDidLoad:(id)arg1;
-(void)interstitialAdActionDidFinish:(id)arg1;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;

@required
-(void)interstitialAdDidUnload:(id)arg1;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;

@end

