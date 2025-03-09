//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "MWTRACE.hpp"
#include "fn_DBInitComm.hpp"
#include "MWTRACE.hpp"
#include "fn_CircleBufferInitializ.hpp"



void gdev_ddh_cc_initialize(PPC::Runtime::GCContext* context)
{
/*803C31EC 003BFFEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C31F0 003BFFF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C31F4 003BFFF4*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_110 @ Get_MemoryOffset_HighBit);
/*803C31F8 003BFFF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C31FC 003BFFFC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, MemoryOffset_110 @ Get_MemoryOffset_LowBit);
/*803C3200 003C0000*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C3204 003C0004*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803C3208 003C0008*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*803C320C 003C000C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C3210 003C0010*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803C3214 003C0014*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C3218 003C0018*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C321C 003C001C*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803C3220 003C0020*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803C3224 003C0024*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803C3228 003C0028*/ PPC::Runtime::ASM::bl(fn_DBInitComm);
/*803C322C 003C002C*/ PPC::Runtime::ASM::lis(context->r4, String_ "DONE_CALLING_EXI2_Ini" 2 @ Get_MemoryOffset_HighBit);
/*803C3230 003C0030*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C3234 003C0034*/ PPC::Runtime::ASM::addi(context->r4, context->r4, String_ "DONE_CALLING_EXI2_Ini" 2 @ Get_MemoryOffset_LowBit);
/*803C3238 003C0038*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C323C 003C003C*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803C3240 003C0040*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056CB20 @ Get_MemoryOffset_HighBit);
/*803C3244 003C0044*/ PPC::Runtime::ASM::lis(context->r4, lbl_8056C620 @ Get_MemoryOffset_HighBit);
/*803C3248 003C0048*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8056CB20 @ Get_MemoryOffset_LowBit);
/*803C324C 003C004C*/ PPC::Runtime::ASM::li(context->r5, 0x500);
/*803C3250 003C0050*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8056C620 @ Get_MemoryOffset_LowBit);
/*803C3254 003C0054*/ PPC::Runtime::ASM::bl(fn_CircleBufferInitializ);
/*803C3258 003C0058*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C325C 003C005C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C3260 003C0060*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C3264 003C0064*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C3268 003C0068*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C326C 003C006C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C3270 003C0070*/ PPC::Runtime::ASM::blr();
}