//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_8021E1A0.hpp"



void fn_8021E15C(PPC::Runtime::GCContext* context)
{
/*8021E15C 0021AF5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021E160 0021AF60*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021E164 0021AF64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021E168 0021AF68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021E16C 0021AF6C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021E170 0021AF70*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*8021E174 0021AF74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021E178 0021AF78*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*8021E17C 0021AF7C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021E180 0021AF80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021E184 0021AF84*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*8021E188 0021AF88*/ PPC::Runtime::ASM::bl(fn_8021E1A0);
/*8021E18C 0021AF8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021E190 0021AF90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021E194 0021AF94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021E198 0021AF98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021E19C 0021AF9C*/ PPC::Runtime::ASM::blr();
}