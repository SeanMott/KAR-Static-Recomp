//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80391B1C.hpp"
#include "fn_80391C70.hpp"



void fn_8039A21C(PPC::Runtime::GCContext* context)
{
/*8039A21C 0039701C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A220 00397020*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A224 00397024*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A228 00397028*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A22C 0039702C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A230 00397030*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039A234 00397034*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8039A238 00397038*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8039A23C 0039703C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A240 00397040*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A244 00397044*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039A248 00397048*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A24C 0039704C*/ PPC::Runtime::ASM::bctrl();
/*8039A250 00397050*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039A254 00397054*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A258 00397058*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A25C 0039705C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039A260 00397060*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A264 00397064*/ PPC::Runtime::ASM::bctrl();
/*8039A268 00397068*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8039A26C 0039706C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8039A270 00397070*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8039A274 00397074*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8039A278 00397078*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039A27C 0039707C*/ PPC::Runtime::ASM::bl(fn_80391C70);
/*8039A280 00397080*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A284 00397084*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A288 00397088*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A28C 0039708C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039A290 00397090*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039A294 00397094*/ PPC::Runtime::ASM::blr();
}