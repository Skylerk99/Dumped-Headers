/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUISearchStandardCell.h>

@class UIImageView, NSOperation;

@interface SPUISearchImageCell : SPUISearchStandardCell {

	UIImageView* _titleImageView;
	NSOperation* _fetchImageOperation;

}

@property (nonatomic,readonly) UIImageView * titleImageView;                 //@synthesize titleImageView=_titleImageView - In the implementation block
@property (nonatomic,retain) NSOperation * fetchImageOperation;              //@synthesize fetchImageOperation=_fetchImageOperation - In the implementation block
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
+(id)placeHolderImageForDomain:(unsigned)arg1 result:(id)arg2 size:(CGSize)arg3 ;
-(id)variableConstraints;
-(id)constantConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)leftTextMargin;
-(void)prepareForReuse;
-(id)leftView;
-(UIImageView *)titleImageView;
-(double)imageWidth;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(id)leftTextView;
-(void)setFetchImageOperation:(NSOperation *)arg1 ;
-(NSOperation *)fetchImageOperation;
@end

