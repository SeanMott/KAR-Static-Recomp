//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_destroyBigStar.hpp"
#include "fn_80106C54.hpp"
#include "fn_80105CB0.hpp"



void fn_hitBreakableFloor(PPC::Runtime::GCContext* context)
{
/*80106BD0 001039D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80106BD4 001039D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80106BD8 001039D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80106BDC 001039DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80106BE0 001039E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80106BE4 001039E4*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80106BE8 001039E8*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*80106BEC 001039EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106BF0 001039F0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80106BF4 001039F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80106BF8 001039F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80106BFC 001039FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*80106C00 00103A00*/ PPC::Runtime::ASM::bl(fn_destroyBigStar);
/*80106C04 00103A04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80106C08 00103A08*/ PPC::Runtime::ASM::beq(.L_80106C14);
/*80106C0C 00103A0C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80106C10 00103A10*/ PPC::Runtime::ASM::b(.L_80106C38);
RUNTIME_PPC_JUMP_LABEL(.L_80106C14, 0x80106C14) //this is a jump label
/*80106C14 00103A14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80106C18 00103A18*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80106C1C 00103A1C*/ PPC::Runtime::ASM::bne(.L_80106C34);
/*80106C20 00103A20*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80106C24 00103A24*/ PPC::Runtime::ASM::bl(fn_80106C54);
/*80106C28 00103A28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80106C2C 00103A2C*/ PPC::Runtime::ASM::bl(fn_80105CB0);
/*80106C30 00103A30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80106C34, 0x80106C34) //this is a jump label
/*80106C34 00103A34*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80106C38, 0x80106C38) //this is a jump label
/*80106C38 00103A38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80106C3C 00103A3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80106C40 00103A40*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80106C44 00103A44*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106C48 00103A48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80106C4C 00103A4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80106C50 00103A50*/ PPC::Runtime::ASM::blr();
}