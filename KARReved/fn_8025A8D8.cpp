//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025A8D8(PPC::Runtime::GCContext* context)
{
/*8025A8D8 002576D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025A8DC 002576DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025A8E0 002576E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A8E4 002576E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025A8E8 002576E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025A8EC 002576EC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025A8F0 002576F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025A8F4 002576F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025A8F8 002576F8*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025A8FC 002576FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025A900 00257700*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025A904 00257704*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025A908 00257708*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025A90C 0025770C*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025A910 00257710*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025A914 00257714*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025A918 00257718*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025A91C 0025771C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025A920 00257720*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025A924 00257724*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025A928 00257728*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025A92C 0025772C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A930 00257730*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025A934 00257734*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025A938 00257738*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025A93C 0025773C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025A940 00257740*/ PPC::Runtime::ASM::blr();
}