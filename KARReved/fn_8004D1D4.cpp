//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8023088C.hpp"



void fn_8004D1D4(PPC::Runtime::GCContext* context)
{
/*8004D1D4 00049FD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004D1D8 00049FD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004D1DC 00049FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D1E0 00049FE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004D1E4 00049FE4*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8004D1E8 00049FE8*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8004D1EC 00049FEC*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8004D1F0 00049FF0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8004D1F4 00049FF4*/ PPC::Runtime::ASM::bne(.L_8004D230);
/*8004D1F8 00049FF8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D1FC, 0x8004D1FC) //this is a jump label
/*8004D1FC 00049FFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004D200 0004A000*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004D204 0004A004*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004D208 0004A008*/ PPC::Runtime::ASM::bne(.L_8004D224);
/*8004D20C 0004A00C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004D210 0004A010*/ PPC::Runtime::ASM::bl(fn_8023088C);
/*8004D214 0004A014*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8004D218 0004A018*/ PPC::Runtime::ASM::beq(.L_8004D224);
/*8004D21C 0004A01C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004D220 0004A020*/ PPC::Runtime::ASM::b(.L_8004D234);
RUNTIME_PPC_JUMP_LABEL(.L_8004D224, 0x8004D224) //this is a jump label
/*8004D224 0004A024*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004D228 0004A028*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004D22C 0004A02C*/ PPC::Runtime::ASM::blt(.L_8004D1FC);
RUNTIME_PPC_JUMP_LABEL(.L_8004D230, 0x8004D230) //this is a jump label
/*8004D230 0004A030*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D234, 0x8004D234) //this is a jump label
/*8004D234 0004A034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D238 0004A038*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004D23C 0004A03C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004D240 0004A040*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004D244 0004A044*/ PPC::Runtime::ASM::blr();
}