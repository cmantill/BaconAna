#ifndef BACONANA_DATAFORMATS_TADDJET_HH
#define BACONANA_DATAFORMATS_TADDJET_HH

#include <TObject.h>

namespace baconhep
{
  class TAddJet : public TObject
  {
    public:
      TAddJet():
      index(-1),
      mass_prun(0), mass_trim(0), mass_sd0(0),
      pt_sd0(0), eta_sd0(0), phi_sd0(0),
      c2_0(0), c2_0P2(0), c2_0P5(0), c2_1P0(0), c2_2P0(0),
      qjet(0),
      tau1(-1), tau2(-1), tau3(-1), tau4(-1),doublecsv(0),
      sj1_pt(0), sj1_eta(0), sj1_phi(0), sj1_m(0), sj1_csv(-2), sj1_qgid(-2), sj1_q(-100),
      sj2_pt(0), sj2_eta(0), sj2_phi(0), sj2_m(0), sj2_csv(-2), sj2_qgid(-2), sj2_q(-100),
      sj3_pt(0), sj3_eta(0), sj3_phi(0), sj3_m(0), sj3_csv(-2), sj3_qgid(-2), sj3_q(-100),
      sj4_pt(0), sj4_eta(0), sj4_phi(0), sj4_m(0), sj4_csv(-2), sj4_qgid(-2), sj4_q(-100),
      pullAngle(0),
      nTracks(0),
      track_decayLengthTau(-1), track_distTauAxis(-1),
      trackSip3dSig_3(-50), trackSip3dSig_2(-50), trackSip3dSig_1(-50), trackSip3dSig_0(-50),
      trackSip2dSigAboveCharm_0(-19), trackSip2dSigAboveBottom_0(-19),
      trackSip2dSigAboveCharm_1(-19), trackSip2dSigAboveBottom_1(-19),
      tau1_trackSip3dSig_0(-50), tau1_trackSip3dSig_1(-50),
      trackSip3dSig_3_1(-50), trackSip3dSig_2_1(-50), trackSip3dSig_1_1(-50), trackSip3dSig_0_1(-50),
      tau1_trackSip3dSig_0_1(-50), tau1_trackSip3dSig_1_1(-50),
      trackSip3dSig_3_2(-50), trackSip3dSig_2_2(-50), trackSip3dSig_1_2(-50), trackSip3dSig_0_2(-50),
      tau1_trackSip3dSig_0_2(-50), tau1_trackSip3dSig_1_2(-50),
      trackSip3dSig_3_3(-50), trackSip3dSig_2_3(-50), trackSip3dSig_1_3(-50), trackSip3dSig_0_3(-50),
      tau1_trackSip3dSig_0_3(-50), tau1_trackSip3dSig_1_3(-50),
      nSV(0),
      tau_SVmass0_nSecondaryVertices(0), tau_SVmass0_flightDistance2dSig(-1),
      tau_SVmass0_vertexDeltaR(-1), tau_SVmass0_vertexNTracks(0),
      tau_SVmass0_trackEtaRel_2(-1), tau_SVmass0_trackEtaRel_1(-1), tau_SVmass0_trackEtaRel_0(-1),
      tau_SVmass0_vertexEnergyRatio(-1), tau_SVmass0_vertexMass(-1), tau_SVmass0_vertexMass_corrected(-1),
      tau_SVmass0_zratio(-5),
      tau_SVmass1_nSecondaryVertices(0), tau_SVmass1_flightDistance2dSig(-1),
      tau_SVmass1_vertexDeltaR(-1), tau_SVmass1_vertexNTracks(0),
      tau_SVmass1_trackEtaRel_2(-1), tau_SVmass1_trackEtaRel_1(-1), tau_SVmass1_trackEtaRel_0(-1),
      tau_SVmass1_vertexEnergyRatio(-1), tau_SVmass1_vertexMass(-1), tau_SVmass1_vertexMass_corrected(-1),
      tau_SVmass1_zratio(-5),
      tau_SVfd0_nSecondaryVertices(0), tau_SVfd0_flightDistance2dSig(-1),
      tau_SVfd0_vertexDeltaR(-1), tau_SVfd0_vertexNTracks(0),
      tau_SVfd0_trackEtaRel_2(-1), tau_SVfd0_trackEtaRel_1(-1), tau_SVfd0_trackEtaRel_0(-1),
      tau_SVfd0_vertexEnergyRatio(-1), tau_SVfd0_vertexMass(-1), tau_SVfd0_vertexMass_corrected(-1),
      tau_SVfd0_zratio(-5),
      tau_SVfd1_vertexDeltaR(-1), tau_SVfd1_vertexNTracks(0),
      tau_SVfd1_trackEtaRel_2(-1), tau_SVfd1_trackEtaRel_1(-1), tau_SVfd1_trackEtaRel_0(-1),
      tau_SVfd1_vertexEnergyRatio(-1), tau_SVfd1_vertexMass(-1), tau_SVfd1_vertexMass_corrected(-1),
      tau_SVfd1_zratio(-5),
      nSM(0),nSE(0),
      PFMuon_pt(-1), PFMuon_eta(-1), PFMuon_phi(-1), PFMuon_ptRel(-1), PFMuon_ratio(-1), PFMuon_ratioRel(-1), PFMuon_deltaR(-1), PFMuon_IP(-1), PFMuon_IP2D(-1),
      PFMuon_nMuHit(-1), PFMuon_nTkHit(-1), PFMuon_nPixHit(-1), PFMuon_nOutHit(-1), PFMuon_nTkLwM(-1), PFMuon_nPixLwM(-1), PFMuon_nMatched(-1), PFMuon_chi2(99), PFMuon_chi2Tk(99), PFMuon_isGlobal(-1), PFMuon_dz(99),
      PFElectron_pt(-1), PFElectron_eta(-1), PFElectron_phi(-1), PFElectron_ptRel(-1), PFElectron_ratio(-1), PFElectron_ratioRel(-1), PFElectron_deltaR(-1), PFElectron_IP(-1), PFElectron_IP2D(-1),
      topTagType(0), top_n_subjets(0), top_m_min(0), top_m_123(0), top_fRec(0),topchi2(0)
      {}
      ~TAddJet(){}
      
      unsigned int index;                                                   // index in original jet collection
      float mass_prun, mass_trim, mass_sd0;                                 // groomed jet masses
      float pt_sd0, eta_sd0, phi_sd0;                                       // soft drop
      float c2_0, c2_0P2, c2_0P5, c2_1P0, c2_2P0;                           // Correlation function with various exponents
      float qjet;                                                           // Q-jet volatility
      float tau1, tau2, tau3, tau4;                                         // N-subjettiness
      float doublecsv;                                                      // Double b-tag 
      
      // subjets from trimming (ordered by pT)
      float sj1_pt, sj1_eta, sj1_phi, sj1_m, sj1_csv, sj1_qgid, sj1_q;
      float sj2_pt, sj2_eta, sj2_phi, sj2_m, sj2_csv, sj2_qgid, sj2_q;
      float sj3_pt, sj3_eta, sj3_phi, sj3_m, sj3_csv, sj3_qgid, sj3_q;
      float sj4_pt, sj4_eta, sj4_phi, sj4_m, sj4_csv, sj4_qgid, sj4_q;
      float pullAngle;
     
      // single b tagger info
      float nTracks;                                                            // Number of tracks associated to the jet
      float track_decayLengthTau, track_distTauAxis;                            // For optimization of tracking parameters
      float trackSip3dSig_3, trackSip3dSig_2, trackSip3dSig_1, trackSip3dSig_0; // 3D SIP (IP value/error) for the most displaced tracks associated to the jet
      float trackSip2dSigAboveCharm_0, trackSip2dSigAboveBottom_0;              // 2D SIP of the first two tracks that raises the Mass above the bottom (charm) threshold 5.2GeV (1.5GeV)
      float trackSip2dSigAboveCharm_1, trackSip2dSigAboveBottom_1;
      float tau1_trackSip3dSig_0, tau1_trackSip3dSig_1;                         // 3D SIP of the two tracks with the highest SIP associated to the closest tau axis to the track
      float trackSip3dSig_3_1, trackSip3dSig_2_1, trackSip3dSig_1_1, trackSip3dSig_0_1;
      float tau1_trackSip3dSig_0_1, tau1_trackSip3dSig_1_1;
      float trackSip3dSig_3_2, trackSip3dSig_2_2, trackSip3dSig_1_2, trackSip3dSig_0_2;
      float tau1_trackSip3dSig_0_2, tau1_trackSip3dSig_1_2;
      float trackSip3dSig_3_3, trackSip3dSig_2_3, trackSip3dSig_1_3, trackSip3dSig_0_3;
      float tau1_trackSip3dSig_0_3, tau1_trackSip3dSig_1_3;
      float nSV;

      // "Leading" SV in mass
      float tau_SVmass0_nSecondaryVertices, tau_SVmass0_flightDistance2dSig;                         // Number of SVs (cross check), 2D flight distance significance
      float tau_SVmass0_vertexDeltaR, tau_SVmass0_vertexNTracks;                                     // DeltaR between the secondary vertex flight direction and the jet axis
      float tau_SVmass0_trackEtaRel_2, tau_SVmass0_trackEtaRel_1, tau_SVmass0_trackEtaRel_0;         // Pseudorapidity of the tracks at the vertex with respect to the tau axis closest to the leading SV in mass
      float tau_SVmass0_vertexEnergyRatio, tau_SVmass0_vertexMass, tau_SVmass0_vertexMass_corrected; // Energy ratio and vertexMass
      float tau_SVmass0_zratio;                                                                      // z-ratio
      float tau_SVmass1_nSecondaryVertices, tau_SVmass1_flightDistance2dSig;
      float tau_SVmass1_vertexDeltaR, tau_SVmass1_vertexNTracks;
      float tau_SVmass1_trackEtaRel_2, tau_SVmass1_trackEtaRel_1, tau_SVmass1_trackEtaRel_0;
      float tau_SVmass1_vertexEnergyRatio, tau_SVmass1_vertexMass, tau_SVmass1_vertexMass_corrected;
      float tau_SVmass1_zratio; 

      // "leading" SV in flight distance error
      float tau_SVfd0_nSecondaryVertices, tau_SVfd0_flightDistance2dSig;
      float tau_SVfd0_vertexDeltaR, tau_SVfd0_vertexNTracks;
      float tau_SVfd0_trackEtaRel_2, tau_SVfd0_trackEtaRel_1, tau_SVfd0_trackEtaRel_0;
      float tau_SVfd0_vertexEnergyRatio, tau_SVfd0_vertexMass, tau_SVfd0_vertexMass_corrected;
      float tau_SVfd0_zratio;
      float tau_SVfd1_nSecondaryVertices, tau_SVfd1_flightDistance2dSig;
      float tau_SVfd1_vertexDeltaR, tau_SVfd1_vertexNTracks;
      float tau_SVfd1_trackEtaRel_2, tau_SVfd1_trackEtaRel_1, tau_SVfd1_trackEtaRel_0;
      float tau_SVfd1_vertexEnergyRatio, tau_SVfd1_vertexMass, tau_SVfd1_vertexMass_corrected;
      float tau_SVfd1_zratio;

      // soft letpon
      float nSM,nSE;
      float PFMuon_pt, PFMuon_eta, PFMuon_phi, PFMuon_ptRel, PFMuon_ratio, PFMuon_ratioRel, PFMuon_deltaR, PFMuon_IP, PFMuon_IP2D;
      float PFMuon_nMuHit, PFMuon_nTkHit, PFMuon_nPixHit, PFMuon_nOutHit, PFMuon_nTkLwM, PFMuon_nPixLwM, PFMuon_nMatched, PFMuon_chi2, PFMuon_chi2Tk, PFMuon_isGlobal, PFMuon_dz;
      float PFElectron_pt, PFElectron_eta, PFElectron_phi, PFElectron_ptRel, PFElectron_ratio, PFElectron_ratioRel, PFElectron_deltaR, PFElectron_IP, PFElectron_IP2D;

      // top tagger info
      unsigned int topTagType;
      unsigned int top_n_subjets;
      float        top_m_min, top_m_123, top_fRec;
      float        topchi2;
    ClassDef(TAddJet,10)
  };
  
  enum ETopTagType
  {
    kCMSTT = 1,
    kHEPTT = 2
  };
}
#endif
