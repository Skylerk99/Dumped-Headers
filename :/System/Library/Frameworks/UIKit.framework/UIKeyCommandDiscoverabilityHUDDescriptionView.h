/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class UITextView, NSMutableDictionary, UIFont, NSString;

@interface UIKeyCommandDiscoverabilityHUDDescriptionView : UIView <NSLayoutManagerDelegate> {

	UITextView* _textView;
	NSMutableDictionary* _glyphViews;
	unsigned long long _glyphSize;
	CGSize _intrinsicContentSize;
	double _spaceWidth;
	UIFont* _font;

}

@property (assign,nonatomic) double spaceWidth;                     //@synthesize spaceWidth=_spaceWidth - In the implementation block
@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateIntrinsicContentSize;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIFont *)font;
-(unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3 ;
-(CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)initWithText:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 lineSpacing:(double)arg4 color:(id)arg5 edgeInsets:(UIEdgeInsets)arg6 ;
-(void)setSpaceWidth:(double)arg1 ;
-(double)spaceWidth;
@end

