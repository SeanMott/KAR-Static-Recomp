//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022E788.hpp"



void fn_8004C3BC(PPC::Runtime::GCContext* context)
{
/*8004C3BC 000491BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004C3C0 000491C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004C3C4 000491C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004C3C8 000491C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004C3CC 000491CC*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8004C3D0 000491D0*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8004C3D4 000491D4*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8004C3D8 000491D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004C3DC 000491DC*/ PPC::Runtime::ASM::bne(.L_8004C418);
/*8004C3E0 000491E0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004C3E4, 0x8004C3E4) //this is a jump label
/*8004C3E4 000491E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C3E8 000491E8*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004C3EC 000491EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004C3F0 000491F0*/ PPC::Runtime::ASM::bne(.L_8004C40C);
/*8004C3F4 000491F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C3F8 000491F8*/ PPC::Runtime::ASM::bl(fn_8022E788);
/*8004C3FC 000491FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004C400 00049200*/ PPC::Runtime::ASM::beq(.L_8004C40C);
/*8004C404 00049204*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004C408 00049208*/ PPC::Runtime::ASM::b(.L_8004C41C);
RUNTIME_PPC_JUMP_LABEL(.L_8004C40C, 0x8004C40C) //this is a jump label
/*8004C40C 0004920C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004C410 00049210*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004C414 00049214*/ PPC::Runtime::ASM::blt(.L_8004C3E4);
RUNTIME_PPC_JUMP_LABEL(.L_8004C418, 0x8004C418) //this is a jump label
/*8004C418 00049218*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004C41C, 0x8004C41C) //this is a jump label
/*8004C41C 0004921C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004C420 00049220*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004C424 00049224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004C428 00049228*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004C42C 0004922C*/ PPC::Runtime::ASM::blr();
}