//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_801587FC.hpp"
#include "fn_801587FC.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"



void fn_80158914(PPC::Runtime::GCContext* context)
{
/*80158914 00155714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80158918 00155718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015891C 0015571C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80158920 00155720*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80158924 00155724*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80158928 00155728*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015892C 0015572C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80158930 00155730*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80158934 00155734*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80158938 00155738*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x748);
/*8015893C 0015573C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x748, context->r3));
/*80158940 00155740*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80158944 00155744*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80158948 00155748*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8015894C 0015574C*/ PPC::Runtime::ASM::lis(context->r4, fn_801587FC @ Get_MemoryOffset_HighBit);
/*80158950 00155750*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80158954 00155754*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80158958 00155758*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8015895C 0015575C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801587FC @ Get_MemoryOffset_LowBit);
/*80158960 00155760*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80158964 00155764*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80158968 00155768*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015896C 0015576C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80158970 00155770*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80158974 00155774*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80158978 00155778*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E080C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015897C 0015577C*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80158980 00155780*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80158984 00155784*/ PPC::Runtime::ASM::li(context->r4, 0x3c);
/*80158988 00155788*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8015898C 0015578C*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80158990 00155790*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80158994 00155794*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80158998 00155798*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8015899C 0015579C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801589A0 001557A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801589A4 001557A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801589A8 001557A8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801589AC 001557AC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801589B0 001557B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801589B4 001557B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801589B8 001557B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801589BC 001557BC*/ PPC::Runtime::ASM::blr();
}