//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800BC31C.hpp"
#include "fn_800BBC0C.hpp"
#include "fn_800BC2D0.hpp"



void fn_801935B0(PPC::Runtime::GCContext* context)
{
/*801935B0 001903B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801935B4 001903B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801935B8 001903B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801935BC 001903BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801935C0 001903C0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801935C4 001903C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801935C8 001903C8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801935CC 001903CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r3));
/* 801935D0 001903D0  54 00 F7 FF */ extrwi. context->r0 , context->r0 , 1 , 29
/*801935D4 001903D4*/ PPC::Runtime::ASM::bne(.L_80193620);
/*801935D8 001903D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x827, context->r30));
/* 801935DC 001903DC  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801935E0 001903E0*/ PPC::Runtime::ASM::bne(.L_80193620);
/*801935E4 001903E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801935E8 001903E8*/ PPC::Runtime::ASM::bl(fn_800BC31C);
/*801935EC 001903EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*801935F0 001903F0*/ PPC::Runtime::ASM::bne(.L_80193610);
/*801935F4 001903F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801935F8 001903F8*/ PPC::Runtime::ASM::bl(fn_800BBC0C);
/*801935FC 001903FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80193600 00190400*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*80193604 00190404*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80193608 00190408  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*8019360C 0019040C*/ PPC::Runtime::ASM::bne(.L_80193620);
RUNTIME_PPC_JUMP_LABEL(.L_80193610, 0x80193610) //this is a jump label
/*80193610 00190410*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80193614 00190414*/ PPC::Runtime::ASM::bl(fn_800BC2D0);
/*80193618 00190418*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019361C 0019041C*/ PPC::Runtime::ASM::beq(.L_80193628);
RUNTIME_PPC_JUMP_LABEL(.L_80193620, 0x80193620) //this is a jump label
/*80193620 00190420*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80193624 00190424*/ PPC::Runtime::ASM::b(.L_8019362C);
RUNTIME_PPC_JUMP_LABEL(.L_80193628, 0x80193628) //this is a jump label
/*80193628 00190428*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019362C, 0x8019362C) //this is a jump label
/*8019362C 0019042C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80193630 00190430*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80193634 00190434*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80193638 00190438*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019363C 0019043C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80193640 00190440*/ PPC::Runtime::ASM::blr();
}