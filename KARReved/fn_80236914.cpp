//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802342F8.hpp"
#include "fn_802401E8.hpp"



void fn_80236914(PPC::Runtime::GCContext* context)
{
/*80236914 00233714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80236918 00233718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023691C 0023371C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80236920 00233720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80236924 00233724*/ PPC::Runtime::ASM::bl(fn_802342F8);
/*80236928 00233728*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8023692C 0023372C*/ PPC::Runtime::ASM::beq(.L_80236954);
/*80236930 00233730*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/* 80236934 00233734  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*80236938 00233738*/ PPC::Runtime::ASM::beq(.L_80236954);
/*8023693C 0023373C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80236940 00233740*/ PPC::Runtime::ASM::bl(fn_802401E8);
/*80236944 00233744*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f1);
/*80236948 00233748*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023694C 0023374C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80236950 00233750*/ PPC::Runtime::ASM::b(.L_80236958);
RUNTIME_PPC_JUMP_LABEL(.L_80236954, 0x80236954) //this is a jump label
/*80236954 00233754*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80236958, 0x80236958) //this is a jump label
/*80236958 00233758*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023695C 0023375C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80236960 00233760*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80236964 00233764*/ PPC::Runtime::ASM::blr();
}