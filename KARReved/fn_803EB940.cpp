//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "EXIGetID.hpp"



void fn_803EB940(PPC::Runtime::GCContext* context)
{
/*803EB940 003E8740*/ PPC::Runtime::ASM::mflr(context->r0);
/*803EB944 003E8744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803EB948 003E8748*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803EB94C 003E874C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EB950 003E8750*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x0);
/*803EB954 003E8754*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*803EB958 003E8758*/ PPC::Runtime::ASM::bl(EXIGetID);
/*803EB95C 003E875C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803EB960 003E8760*/ PPC::Runtime::ASM::bne(.L_803EB968);
/*803EB964 003E8764*/ PPC::Runtime::ASM::b(.L_803EBA44);
RUNTIME_PPC_JUMP_LABEL(.L_803EB968, 0x803EB968) //this is a jump label
/*803EB968 003E8768*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EB96C 003E876C*/ PPC::Runtime::ASM::clrrwi(context->r5, context->r6, 8);
/*803EB970 003E8770*/ PPC::Runtime::ASM::lis(context->r4, 0x402);
/*803EB974 003E8774*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x300);
/*803EB978 003E8778*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803EB97C 003E877C*/ PPC::Runtime::ASM::beq(.L_803EB9B4);
/*803EB980 003E8780*/ PPC::Runtime::ASM::bge(.L_803EB9A4);
/*803EB984 003E8784*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x200);
/*803EB988 003E8788*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803EB98C 003E878C*/ PPC::Runtime::ASM::beq(.L_803EB9B4);
/*803EB990 003E8790*/ PPC::Runtime::ASM::bge(.L_803EB9BC);
/*803EB994 003E8794*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x100);
/*803EB998 003E8798*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803EB99C 003E879C*/ PPC::Runtime::ASM::beq(.L_803EB9B4);
/*803EB9A0 003E87A0*/ PPC::Runtime::ASM::b(.L_803EB9BC);
RUNTIME_PPC_JUMP_LABEL(.L_803EB9A4, 0x803EB9A4) //this is a jump label
/*803EB9A4 003E87A4*/ PPC::Runtime::ASM::lis(context->r0, 0x406);
/*803EB9A8 003E87A8*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803EB9AC 003E87AC*/ PPC::Runtime::ASM::beq(.L_803EB9B4);
/*803EB9B0 003E87B0*/ PPC::Runtime::ASM::b(.L_803EB9BC);
RUNTIME_PPC_JUMP_LABEL(.L_803EB9B4, 0x803EB9B4) //this is a jump label
/*803EB9B4 003E87B4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803EB9B8 003E87B8*/ PPC::Runtime::ASM::b(.L_803EBA44);
RUNTIME_PPC_JUMP_LABEL(.L_803EB9BC, 0x803EB9BC) //this is a jump label
/*803EB9BC 003E87BC*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r6, 16);
/*803EB9C0 003E87C0*/ PPC::Runtime::ASM::lis(context->r0, 0x507);
/*803EB9C4 003E87C4*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*803EB9C8 003E87C8*/ PPC::Runtime::ASM::beq(.L_803EBA38);
/*803EB9CC 003E87CC*/ PPC::Runtime::ASM::bge(.L_803EBA40);
/*803EB9D0 003E87D0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803EB9D4 003E87D4*/ PPC::Runtime::ASM::beq(.L_803EB9DC);
/*803EB9D8 003E87D8*/ PPC::Runtime::ASM::b(.L_803EBA40);
RUNTIME_PPC_JUMP_LABEL(.L_803EB9DC, 0x803EB9DC) //this is a jump label
/*803EB9DC 003E87DC*/ PPC::Runtime::ASM::andi.(context->r0, context->r6, 0x3803);
/*803EB9E0 003E87E0*/ PPC::Runtime::ASM::bne(.L_803EBA40);
/*803EB9E4 003E87E4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r6, 0, 24, 29);
/*803EB9E8 003E87E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x20);
/*803EB9EC 003E87EC*/ PPC::Runtime::ASM::beq(.L_803EBA30);
/*803EB9F0 003E87F0*/ PPC::Runtime::ASM::bge(.L_803EBA18);
/*803EB9F4 003E87F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*803EB9F8 003E87F8*/ PPC::Runtime::ASM::beq(.L_803EBA30);
/*803EB9FC 003E87FC*/ PPC::Runtime::ASM::bge(.L_803EBA0C);
/*803EBA00 003E8800*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*803EBA04 003E8804*/ PPC::Runtime::ASM::beq(.L_803EBA30);
/*803EBA08 003E8808*/ PPC::Runtime::ASM::b(.L_803EBA40);
RUNTIME_PPC_JUMP_LABEL(.L_803EBA0C, 0x803EBA0C) //this is a jump label
/*803EBA0C 003E880C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x10);
/*803EBA10 003E8810*/ PPC::Runtime::ASM::beq(.L_803EBA30);
/*803EBA14 003E8814*/ PPC::Runtime::ASM::b(.L_803EBA40);
RUNTIME_PPC_JUMP_LABEL(.L_803EBA18, 0x803EBA18) //this is a jump label
/*803EBA18 003E8818*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x80);
/*803EBA1C 003E881C*/ PPC::Runtime::ASM::beq(.L_803EBA30);
/*803EBA20 003E8820*/ PPC::Runtime::ASM::bge(.L_803EBA40);
/*803EBA24 003E8824*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x40);
/*803EBA28 003E8828*/ PPC::Runtime::ASM::beq(.L_803EBA30);
/*803EBA2C 003E882C*/ PPC::Runtime::ASM::b(.L_803EBA40);
RUNTIME_PPC_JUMP_LABEL(.L_803EBA30, 0x803EBA30) //this is a jump label
/*803EBA30 003E8830*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803EBA34 003E8834*/ PPC::Runtime::ASM::b(.L_803EBA44);
RUNTIME_PPC_JUMP_LABEL(.L_803EBA38, 0x803EBA38) //this is a jump label
/*803EBA38 003E8838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803EBA3C 003E883C*/ PPC::Runtime::ASM::b(.L_803EBA44);
RUNTIME_PPC_JUMP_LABEL(.L_803EBA40, 0x803EBA40) //this is a jump label
/*803EBA40 003E8840*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803EBA44, 0x803EBA44) //this is a jump label
/*803EBA44 003E8844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803EBA48 003E8848*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EBA4C 003E884C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803EBA50 003E8850*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803EBA54 003E8854*/ PPC::Runtime::ASM::blr();
}