//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801C44E8.hpp"
#include "fn_801C44E8.hpp"
#include "fn_801C444C.hpp"
#include "fn_801C44A0.hpp"
#include "fn_801C444C.hpp"
#include "fn_801C45F0.hpp"
#include "fn_801C45D4.hpp"
#include "fn_801C44A0.hpp"
#include "fn_801C45F0.hpp"
#include "fn_801C45D4.hpp"
#include "fn_801C43E8.hpp"



void fn_801C4CBC(PPC::Runtime::GCContext* context)
{
/*801C4CBC 001C1ABC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4CC0 001C1AC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4CC4 001C1AC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E19C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C4CC8 001C1AC8*/ PPC::Runtime::ASM::li(context->r4, 0x39);
/*801C4CCC 001C1ACC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4CD0 001C1AD0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801C4CD4 001C1AD4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801C4CD8 001C1AD8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E19C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C4CDC 001C1ADC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C4CE0 001C1AE0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C4CE4 001C1AE4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C4CE8 001C1AE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r3));
/*801C4CEC 001C1AEC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x920, context->r3));
/*801C4CF0 001C1AF0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x74);
/*801C4CF4 001C1AF4*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C4CF8 001C1AF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r31));
/*801C4CFC 001C1AFC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C4D00 001C1B00*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 7, 24, 24);
/*801C4D04 001C1B04*/ PPC::Runtime::ASM::lis(context->r3, fn_801C44E8 @ Get_MemoryOffset_HighBit);
/*801C4D08 001C1B08*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r31));
/*801C4D0C 001C1B0C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801C44E8 @ Get_MemoryOffset_LowBit);
/*801C4D10 001C1B10*/ PPC::Runtime::ASM::lis(context->r3, fn_801C444C @ Get_MemoryOffset_HighBit);
/*801C4D14 001C1B14*/ PPC::Runtime::ASM::lis(context->r5, fn_801C44A0 @ Get_MemoryOffset_HighBit);
/*801C4D18 001C1B18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x914, context->r31));
/*801C4D1C 001C1B1C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801C444C @ Get_MemoryOffset_LowBit);
/*801C4D20 001C1B20*/ PPC::Runtime::ASM::lis(context->r4, fn_801C45F0 @ Get_MemoryOffset_HighBit);
/*801C4D24 001C1B24*/ PPC::Runtime::ASM::lis(context->r3, fn_801C45D4 @ Get_MemoryOffset_HighBit);
/*801C4D28 001C1B28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*801C4D2C 001C1B2C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_801C44A0 @ Get_MemoryOffset_LowBit);
/*801C4D30 001C1B30*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801C45F0 @ Get_MemoryOffset_LowBit);
/*801C4D34 001C1B34*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801C45D4 @ Get_MemoryOffset_LowBit);
/*801C4D38 001C1B38*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x910, context->r31));
/*801C4D3C 001C1B3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C4D40 001C1B40*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r31));
/*801C4D44 001C1B44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r31));
/*801C4D48 001C1B48*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801C4D4C 001C1B4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801C4D50 001C1B50*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1c);
/*801C4D54 001C1B54*/ PPC::Runtime::ASM::bl(fn_801C43E8);
/*801C4D58 001C1B58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801C4D5C 001C1B5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C4D60 001C1B60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44c, context->r31));
/*801C4D64 001C1B64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x448, context->r31));
/*801C4D68 001C1B68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r31));
/*801C4D6C 001C1B6C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801C4D70 001C1B70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x924, context->r31));
/*801C4D74 001C1B74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C4D78 001C1B78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4D7C 001C1B7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C4D80 001C1B80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4D84 001C1B84*/ PPC::Runtime::ASM::blr();
}