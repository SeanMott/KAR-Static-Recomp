//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_AS_Dash.hpp"
#include "fn_801A2E7C.hpp"



void fn_801BB24C(PPC::Runtime::GCContext* context)
{
/*801BB24C 001B804C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BB250 001B8050*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BB254 001B8054*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801BB258 001B8058*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BB25C 001B805C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB260 001B8060*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BB264 001B8064*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BB268 001B8068*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e0, context->r3));
/*801BB26C 001B806C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 24, 25);
/*801BB270 001B8070*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e0, context->r3));
/*801BB274 001B8074*/ PPC::Runtime::ASM::bl(fn_AS_Dash);
/*801BB278 001B8078*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BB27C 001B807C*/ PPC::Runtime::ASM::bl(fn_801A2E7C);
/*801BB280 001B8080*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e0, context->r31));
/*801BB284 001B8084*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801BB288 001B8088*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 24, 25);
/*801BB28C 001B808C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e0, context->r31));
/*801BB290 001B8090*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801BB294 001B8094*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
/*801BB298 001B8098*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r31));
/*801BB29C 001B809C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BB2A0 001B80A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB2A4 001B80A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BB2A8 001B80A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BB2AC 001B80AC*/ PPC::Runtime::ASM::blr();
}