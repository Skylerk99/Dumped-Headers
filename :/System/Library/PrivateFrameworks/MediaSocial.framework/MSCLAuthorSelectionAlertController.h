/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSMutableArray, UIImage, SKUIResourceLoader, NSString;

@interface MSCLAuthorSelectionAlertController : UIAlertController <SKUIArtworkRequestDelegate> {

	NSMutableArray* _artworkNotificationObservers;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;

}

@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(void)dealloc;
-(id)_placeholderImage;
-(id)_imageDataConsumer;
-(id)addActionWithAuthor:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_newArtworkRequestForAuthor:(id)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
@end

