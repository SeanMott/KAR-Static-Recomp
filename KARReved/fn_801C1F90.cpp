//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C440C.hpp"
#include "fn_801C2020.hpp"
#include "fn_801C22EC.hpp"
#include "fn_801C2494.hpp"
#include "fn_801C26AC.hpp"



void fn_801C1F90(PPC::Runtime::GCContext* context)
{
/*801C1F90 001BED90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1F94 001BED94*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1F98 001BED98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1F9C 001BED9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C1FA0 001BEDA0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C1FA4 001BEDA4*/ PPC::Runtime::ASM::bl(fn_801C440C);
/*801C1FA8 001BEDA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801C1FAC 001BEDAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1f);
/*801C1FB0 001BEDB0*/ PPC::Runtime::ASM::beq(.L_801C1FF0);
/*801C1FB4 001BEDB4*/ PPC::Runtime::ASM::bge(.L_801C1FC8);
/*801C1FB8 001BEDB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1d);
/*801C1FBC 001BEDBC*/ PPC::Runtime::ASM::beq(.L_801C1FD4);
/*801C1FC0 001BEDC0*/ PPC::Runtime::ASM::bge(.L_801C1FE0);
/*801C1FC4 001BEDC4*/ PPC::Runtime::ASM::b(.L_801C200C);
RUNTIME_PPC_JUMP_LABEL(.L_801C1FC8, 0x801C1FC8) //this is a jump label
/*801C1FC8 001BEDC8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x21);
/*801C1FCC 001BEDCC*/ PPC::Runtime::ASM::bge(.L_801C200C);
/*801C1FD0 001BEDD0*/ PPC::Runtime::ASM::b(.L_801C2000);
RUNTIME_PPC_JUMP_LABEL(.L_801C1FD4, 0x801C1FD4) //this is a jump label
/*801C1FD4 001BEDD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C1FD8 001BEDD8*/ PPC::Runtime::ASM::bl(fn_801C2020);
/*801C1FDC 001BEDDC*/ PPC::Runtime::ASM::b(.L_801C200C);
RUNTIME_PPC_JUMP_LABEL(.L_801C1FE0, 0x801C1FE0) //this is a jump label
/*801C1FE0 001BEDE0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r31));
/*801C1FE4 001BEDE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C1FE8 001BEDE8*/ PPC::Runtime::ASM::bl(fn_801C22EC);
/*801C1FEC 001BEDEC*/ PPC::Runtime::ASM::b(.L_801C200C);
RUNTIME_PPC_JUMP_LABEL(.L_801C1FF0, 0x801C1FF0) //this is a jump label
/*801C1FF0 001BEDF0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r31));
/*801C1FF4 001BEDF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C1FF8 001BEDF8*/ PPC::Runtime::ASM::bl(fn_801C2494);
/*801C1FFC 001BEDFC*/ PPC::Runtime::ASM::b(.L_801C200C);
RUNTIME_PPC_JUMP_LABEL(.L_801C2000, 0x801C2000) //this is a jump label
/*801C2000 001BEE00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r31));
/*801C2004 001BEE04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C2008 001BEE08*/ PPC::Runtime::ASM::bl(fn_801C26AC);
RUNTIME_PPC_JUMP_LABEL(.L_801C200C, 0x801C200C) //this is a jump label
/*801C200C 001BEE0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2010 001BEE10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C2014 001BEE14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C2018 001BEE18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C201C 001BEE1C*/ PPC::Runtime::ASM::blr();
}