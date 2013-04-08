#ifndef __L1TMUON_PTASSIGNMENTUNIT_H__
#define __L1TMUON_PTASSIGNMENTUNIT_H__
// 
// Class: L1TMuon::PtAssignmentUnit
//
// Info: This is a base class for any algorithm that takes a found track
//       and uses the available information to assign the track's pT.
//
// Author: L. Gray (FNAL)
//
#include <vector>
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonInternalTrackFwd.h"
#include "FWCore/Utilities/interface/InputTag.h"

namespace edm {
  class ParameterSet;
  class Event;
  class EventSetup;
}

namespace L1TMuon {
  
  class PtAssignmentUnit {
  public:
    PtAssignmentUnit(const edm::ParameterSet&);
    virtual ~PtAssignmentUnit() {}

    virtual InternalTrackCollection 
      assignPt(const edm::EventSetup&, 
	       const InternalTrackCollection&) const = 0;
  protected:
    std::string _name;
  };
}

#endif
