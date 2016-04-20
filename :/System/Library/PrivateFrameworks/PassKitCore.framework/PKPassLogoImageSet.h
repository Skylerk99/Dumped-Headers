/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet {

	PKImage* _logoImage;
	PKImage* _backgroundImage;
	PKImage* _stripImage;
	PKImage* _footerImage;
	PKImage* _bankLogoImage;
	PKImage* _networkLogoImage;
	PKImage* _cobrandLogoImage;
	PKImage* _cardBackgroundImage;
	PKImage* _cardBackgroundCombinedImage;

}

@property (nonatomic,retain) PKImage * logoImage;                                //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) PKImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) PKImage * stripImage;                               //@synthesize stripImage=_stripImage - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                              //@synthesize footerImage=_footerImage - In the implementation block
@property (nonatomic,retain) PKImage * bankLogoImage;                            //@synthesize bankLogoImage=_bankLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * networkLogoImage;                         //@synthesize networkLogoImage=_networkLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * cobrandLogoImage;                         //@synthesize cobrandLogoImage=_cobrandLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * cardBackgroundImage;                      //@synthesize cardBackgroundImage=_cardBackgroundImage - In the implementation block
@property (nonatomic,retain) PKImage * cardBackgroundCombinedImage;              //@synthesize cardBackgroundCombinedImage=_cardBackgroundCombinedImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
+(long long)imageSetType;
-(void)resizeWithScreenSize:(CGSize)arg1 ;
-(void)loadPDFArtFromBundle:(id)arg1 ;
-(PKImage *)footerImage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PKImage *)backgroundImage;
-(void)setBackgroundImage:(PKImage *)arg1 ;
-(PKImage *)stripImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setStripImage:(PKImage *)arg1 ;
-(void)setFooterImage:(PKImage *)arg1 ;
-(void)setCardBackgroundCombinedImage:(PKImage *)arg1 ;
-(PKImage *)cardBackgroundCombinedImage;
-(void)setBankLogoImage:(PKImage *)arg1 ;
-(void)setNetworkLogoImage:(PKImage *)arg1 ;
-(void)setCobrandLogoImage:(PKImage *)arg1 ;
-(void)setCardBackgroundImage:(PKImage *)arg1 ;
-(PKImage *)bankLogoImage;
-(PKImage *)networkLogoImage;
-(PKImage *)cobrandLogoImage;
-(PKImage *)cardBackgroundImage;
-(void)setLogoImage:(PKImage *)arg1 ;
-(PKImage *)logoImage;
@end

