//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8037CCDC(PPC::Runtime::GCContext* context)
{
/*8037CCDC 00379ADC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037CCE0 00379AE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037CCE4 00379AE4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD724 @ Get_MemoryOffset_HighBit);
/*8037CCE8 00379AE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037CCEC 00379AEC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BD724 @ Get_MemoryOffset_LowBit);
/*8037CCF0 00379AF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037CCF4 00379AF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037CCF8 00379AF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037CCFC 00379AFC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037CD00 00379B00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8037CD04 00379B04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8037CD08 00379B08*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037CD0C 00379B0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8037CD10 00379B10*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037CD14 00379B14*/ PPC::Runtime::ASM::bctrl();
/*8037CD18 00379B18*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F3510 @ Get_MemoryOffset_HighBit);
/*8037CD1C 00379B1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F3350 @ Get_MemoryOffset_HighBit);
/*8037CD20 00379B20*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F3510 @ Get_MemoryOffset_LowBit);
/*8037CD24 00379B24*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037CD28 00379B28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037CD2C 00379B2C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037CD30 00379B30*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4C04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037CD34 00379B34*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037CD38 00379B38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8037CD3C 00379B3C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F3350 @ Get_MemoryOffset_LowBit);
/*8037CD40 00379B40*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4BE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037CD44 00379B44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8037CD48 00379B48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8037CD4C 00379B4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4C08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037CD50 00379B50*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8037CD54 00379B54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037CD58 00379B58*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8037CD5C 00379B5C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8037CD60 00379B60*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8037CD64 00379B64*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8037CD68 00379B68*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8037CD6C 00379B6C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8037CD70 00379B70*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8037CD74 00379B74*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8037CD78 00379B78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037CD7C 00379B7C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8037CD80 00379B80*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*8037CD84 00379B84*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*8037CD88 00379B88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8037CD8C 00379B8C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8037CD90 00379B90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037CD94 00379B94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037CD98 00379B98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037CD9C 00379B9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037CDA0 00379BA0*/ PPC::Runtime::ASM::blr();
}