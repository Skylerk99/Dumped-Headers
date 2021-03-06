/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPHeaderRep.h>

@class TPPaginatedPageInfo;

@interface TPHeaderRep : TSWPHeaderRep {

	BOOL _hideKnobs;

}

@property (nonatomic,readonly) TPPaginatedPageInfo * pageInfo; 
@property (assign,nonatomic) BOOL hideKnobs;                                //@synthesize hideKnobs=_hideKnobs - In the implementation block
-(id)pageLayout;
-(TPPaginatedPageInfo *)pageInfo;
-(BOOL)p_isInDocumentSetup;
-(BOOL)p_isMiddleHeaderRep;
-(BOOL)p_isMiddleFooterRep;
-(BOOL)shouldIgnoreSingleTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2 ;
-(BOOL)p_shouldCreateArrowKnobs;
-(BOOL)hideKnobs;
-(void)setHideKnobs:(BOOL)arg1 ;
@end

