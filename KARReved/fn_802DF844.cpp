//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D1C2C.hpp"
#include "fn_80377C10.hpp"



void fn_802DF844(PPC::Runtime::GCContext* context)
{
/*802DF844 002DC644*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802DF848 002DC648*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DF84C 002DC64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DF850 002DC650*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802DF854 002DC654*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802DF858 002DC658*/ PPC::Runtime::ASM::bl(fn_802D1C2C);
/*802DF85C 002DC65C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802DF860 002DC660*/ PPC::Runtime::ASM::lis(context->r3, AC_Stuff_StructBlob @ Get_MemoryOffset_HighBit);
/*802DF864 002DC664*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802DF868 002DC668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802DF86C 002DC66C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, AC_Stuff_StructBlob @ Get_MemoryOffset_LowBit);
/*802DF870 002DC670*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802DF874 002DC674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/*802DF878 002DC678*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802DF87C 002DC67C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802DF880 002DC680*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802DF884 002DC684*/ PPC::Runtime::ASM::beq(.L_802DF8E8);
/*802DF888 002DC688*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DF88C 002DC68C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802DF890 002DC690*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BLOB_7_AND_5_PAIR_STORAGE @ Get_MemoryOffset_SDA21);
/*802DF894 002DC694*/ PPC::Runtime::ASM::li(context->r6, STRUCT_BLOB_5_HANDLE @ Get_MemoryOffset_SDA21);
/*802DF898 002DC698*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802DF89C 002DC69C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802DF8A0 002DC6A0*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BLOB_6 @ Get_MemoryOffset_HighBit);
/*802DF8A4 002DC6A4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DF8A8 002DC6A8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802DF8AC 002DC6AC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, STRUCT_BLOB_6 @ Get_MemoryOffset_LowBit);
/*802DF8B0 002DC6B0*/ PPC::Runtime::ASM::bl(fn_80377C10);
/*802DF8B4 002DC6B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802DF8B8 002DC6B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802DF8BC 002DC6BC*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r3));
/*802DF8C0 002DC6C0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802DF8C4 002DC6C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*802DF8C8 002DC6C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802DF8CC 002DC6CC*/ PPC::Runtime::ASM::bctrl();
/*802DF8D0 002DC6D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802DF8D4 002DC6D4*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r3));
/*802DF8D8 002DC6D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DF8DC 002DC6DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r12));
/*802DF8E0 002DC6E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802DF8E4 002DC6E4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802DF8E8, 0x802DF8E8) //this is a jump label
/*802DF8E8 002DC6E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DF8EC 002DC6EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802DF8F0 002DC6F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802DF8F4 002DC6F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DF8F8 002DC6F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802DF8FC 002DC6FC*/ PPC::Runtime::ASM::blr();
}