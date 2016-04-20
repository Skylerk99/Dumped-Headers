/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateMonogrammable.h>

@class SAUIImageResource, NSArray, NSString;

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (assign,nonatomic) float alpha; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSArray * monogramName; 
@property (nonatomic,copy) NSString * style; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageView;
+(id)imageViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(SAUIImageResource *)image;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)monogramName;
-(void)setMonogramName:(NSArray *)arg1 ;
@end

