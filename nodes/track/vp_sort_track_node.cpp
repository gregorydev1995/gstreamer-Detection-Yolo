
#include "vp_sort_track_node.h"


namespace vp_nodes {
        
    vp_sort_track_node::vp_sort_track_node(std::string node_name, 
                                            vp_track_for track_for):
                                            vp_track_node(node_name, track_for) {
        this->initialized();
    }
    
    vp_sort_track_node::~vp_sort_track_node()
    {
    }

    void track(const std::vector<vp_objects::vp_rect>& target_rects, 
                    const std::vector<std::vector<float>>& target_embeddings, 
                    std::vector<int>& track_ids) {
        // fill track_ids according to target_rects (target_embeddings ignored)
        // sort logic here ...
    }
}