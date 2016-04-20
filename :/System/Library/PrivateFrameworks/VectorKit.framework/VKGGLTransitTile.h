/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTile.h>

@class VKAnimation;

@interface VKGGLTransitTile : VKVectorTile {

	vector<vk::TransitLine, std::__1::allocator<vk::TransitLine> >* _lines;
	vector<vk::TransitLink, std::__1::allocator<vk::TransitLink> >* _links;
	list<vk::TransitDisplayConnection, std::__1::allocator<vk::TransitDisplayConnection> >* _displayConnections;
	unique_ptr<vk::TransitJunctionManager, std::__1::default_delete<vk::TransitJunctionManager> >* _junctionManager;
	vector<std::__1::shared_ptr<vk::TransitNode>, std::__1::allocator<std::__1::shared_ptr<vk::TransitNode> > >* _nodes;
	vector<std::__1::shared_ptr<vk::TransitConnectedNode>, std::__1::allocator<std::__1::shared_ptr<vk::TransitConnectedNode> > >* _nodesWithConnectivity;
	vector<std::__1::shared_ptr<vk::TransitConnectedNode>, std::__1::allocator<std::__1::shared_ptr<vk::TransitConnectedNode> > >* _connectedNodes;
	vector<std::__1::shared_ptr<vk::TransitParentNode>, std::__1::allocator<std::__1::shared_ptr<vk::TransitParentNode> > >* _parentNodes;
	vector<std::__1::shared_ptr<vk::TransitOrphanNode>, std::__1::allocator<std::__1::shared_ptr<vk::TransitOrphanNode> > >* _orphanNodes;
	unique_ptr<ggl::RibbonLayer<ggl::TransitRibbonDescriptor>, std::__1::default_delete<ggl::RibbonLayer<ggl::TransitRibbonDescriptor> > >* _lineLayer;
	map<unsigned int, ggl::RibbonBatch<ggl::TransitRibbonDescriptor> *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, ggl::RibbonBatch<ggl::TransitRibbonDescriptor> *> > >* _lineBatches;
	unique_ptr<ggl::TransitLineRibbon::Shader::Setup, std::__1::default_delete<ggl::TransitLineRibbon::Shader::Setup> >* _lineStrokeShaderSetup;
	unique_ptr<ggl::TransitLineRibbon::Shader::Setup, std::__1::default_delete<ggl::TransitLineRibbon::Shader::Setup> >* _lineFillShaderSetup;
	unique_ptr<md::StyleTexture<vk::TransitLineSegment::StylePixel>, std::__1::default_delete<md::StyleTexture<vk::TransitLineSegment::StylePixel> > >* _lineFillStyleTexture;
	unique_ptr<md::StyleTexture<vk::TransitLineSegment::StylePixel>, std::__1::default_delete<md::StyleTexture<vk::TransitLineSegment::StylePixel> > >* _lineStrokeStyleTexture;
	unique_ptr<ggl::RibbonLayer<ggl::RoadRibbonDescriptor>, std::__1::default_delete<ggl::RibbonLayer<ggl::RoadRibbonDescriptor> > >* _displayConnectionLayer;
	LabelExternalObjectsModerator* _labelExternalObjectsModerator;
	unordered_map<unsigned long long, std::__1::unordered_set<vk::TransitNode *, std::__1::hash<vk::TransitNode *>, std::__1::equal_to<vk::TransitNode *>, std::__1::allocator<vk::TransitNode *> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_set<vk::TransitNode *, std::__1::hash<vk::TransitNode *>, std::__1::equal_to<vk::TransitNode *>, std::__1::allocator<vk::TransitNode *> > > > >* _lineIDToAssociatedNodesMap;
	float _lineInflation;
	float _displayConnectionInflation;
	float _alphaScale;
	BOOL _didLineDataChange;
	shared_ptr<md::DataOverrideManager>* _dataOverrideManager;
	VKAnimation* _animation;

}

@property (nonatomic,retain) VKAnimation * animation;                                                       //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) Setup* lineStrokeShaderSetup; 
@property (nonatomic,readonly) Setup* lineFillShaderSetup; 
@property (nonatomic,readonly) vector<std::__1::shared_ptr<vk::TransitNode>* nodes;                         //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) list<vk::TransitDisplayConnection* displayConnections;                       //@synthesize displayConnections=_displayConnections - In the implementation block
@property (nonatomic,readonly) RibbonLayer<ggl::TransitRibbonDescriptor>* lineLayer; 
@property (nonatomic,readonly) RibbonLayer<ggl::RoadRibbonDescriptor>* displayConnectionLayer; 
-(void)dealloc;
-(VKAnimation *)animation;
-(void)setAnimation:(VKAnimation *)arg1 ;
-(vector<std::__1::shared_ptr<vk::TransitNode>*)nodes;
-(void)setSelectedNodes:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(void)setSelectedLines:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(void)appendLinesAttachedToNodes:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 toLines:(unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg2 ;
-(void)willDisappear;
-(void)updateLineStylesInContext:(id)arg1 ;
-(void)addTransitLinesAtGroundPoint:(const VKPoint*)arg1 toArray:(vector<std::__1::pair<TransitLineWithLink, float>, std::__1::allocator<std::__1::pair<TransitLineWithLink, float> > >*)arg2 ;
-(RibbonLayer<ggl::TransitRibbonDescriptor>*)lineLayer;
-(void)updateDisplayConnectionStylesInContext:(id)arg1 ;
-(void)willAppear;
-(Setup*)lineStrokeShaderSetup;
-(void)setAlphaScale:(float)arg1 ;
-(void)addTransitLinesInRect:(const SCD_Struct_VK11*)arg1 toSet:(unordered_set<TransitLineWithLink, TransitLineWithLinkHash, std::__1::equal_to<TransitLineWithLink>, std::__1::allocator<TransitLineWithLink> >*)arg2 ;
-(void)updateNodeStylesInContext:(id)arg1 ;
-(void)appendNodesAttachedToLines:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 toNodes:(unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg2 ;
-(RibbonLayer<ggl::RoadRibbonDescriptor>*)displayConnectionLayer;
-(void)appendNodesRelatedToNodes:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 toNodes:(unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg2 ;
-(float)minLineZoomForIDs:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(BOOL)updateLinesAtZoom:(float)arg1 ;
-(Setup*)lineFillShaderSetup;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 styleManager:(shared_ptr<gss::StyleManager>*)arg3 dataOverrideManager:(shared_ptr<md::DataOverrideManager>*)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device*)arg7 labelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg8 ;
-(void)createGroupsWithDevice:(Device*)arg1 ;
-(void)_createDisplayConnectionsWithLoader:(Loader*)arg1 ;
-(list<vk::TransitDisplayConnection*)displayConnections;
-(float)_tilePerPoint:(id)arg1 ;
-(void)_createNodes;
-(BOOL)containsLinesInSet:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(void)_createLinesWithLoader:(Loader*)arg1 countLineSegments:(unsigned long long)arg2 ;
@end

