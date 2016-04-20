/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKStyleFactory, NSDictionary, NSMutableDictionary;

@interface IKTemplateStyleSheet : NSObject {

	IKStyleFactory* _styleFactory;
	NSDictionary* _templateTree;
	NSMutableDictionary* _styleComposersByKeypath;

}

@property (nonatomic,retain,readonly) IKStyleFactory * styleFactory;                              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * templateTree;                                  //@synthesize templateTree=_templateTree - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * styleComposersByKeypath;              //@synthesize styleComposersByKeypath=_styleComposersByKeypath - In the implementation block
+(id)styleSheetForTemplateName:(id)arg1 ;
+(void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2 ;
+(xmlDoc*)xmlTreeWithData:(id)arg1 error:(id*)arg2 ;
+(void)coalesceTrees:(xmlNode*)arg1 overridingTree:(xmlNode*)arg2 forcedTemplateName:(id)arg3 ;
+(id)_templateTreeNodeWithXMLNode:(xmlNode*)arg1 parentNode:(id)arg2 ;
+(void)registerStyleSheetURL:(id)arg1 parentStyleSheets:(id)arg2 forTemplateName:(id)arg3 ;
-(IKStyleFactory *)styleFactory;
-(id)initWithXMLDoc:(xmlDoc*)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)styleComposersByKeypath;
-(NSDictionary *)templateTree;
-(id)_styleComposerForNode:(id)arg1 ;
-(id)styleComposerForElement:(id)arg1 ;
@end

