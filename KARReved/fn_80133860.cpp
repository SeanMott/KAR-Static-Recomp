//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059818.hpp"
#include "fn_80059818.hpp"
#include "fn_80059520.hpp"
#include "fn_801396E4.hpp"
#include "fn_8013AB88.hpp"
#include "fn_8014DDEC.hpp"
#include "fn_8014DF2C.hpp"
#include "fn_8014E19C.hpp"
#include "fn_8014E3EC.hpp"
#include "fn_8014E888.hpp"
#include "fn_8014EC10.hpp"
#include "fn_8014EEBC.hpp"
#include "fn_8016180C.hpp"



void fn_80133860(PPC::Runtime::GCContext* context)
{
/*80133860 00130660*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80133864 00130664*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133868 00130668*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*8013386C 0013066C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1133 @ Get_MemoryOffset_HighBit);
/*80133870 00130670*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80133874 00130674*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80133878 00130678*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013387C 0013067C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_1133 @ Get_MemoryOffset_LowBit);
/*80133880 00130680*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80133884 00130684*/ PPC::Runtime::ASM::stb(context->r0, lbl_80558788 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*80133888 00130688*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7E0 @ Get_MemoryOffset_SDA21);
/*8013388C 0013068C*/ PPC::Runtime::ASM::bl(fn_80059818);
/*80133890 00130690*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x88);
/*80133894 00130694*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7C0 @ Get_MemoryOffset_SDA21);
/*80133898 00130698*/ PPC::Runtime::ASM::bl(fn_80059818);
/*8013389C 0013069C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD7C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801338A0 001306A0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801338A4 001306A4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x218);
/*801338A8 001306A8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801338AC 001306AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801338B0 001306B0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801338B4 001306B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*801338B8 001306B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801338BC 001306BC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*801338C0 001306C0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801338C4 001306C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559A90 @ Get_MemoryOffset_HighBit);
/*801338C8 001306C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r4));
/*801338CC 001306CC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559A90 @ Get_MemoryOffset_LowBit);
/*801338D0 001306D0*/ PPC::Runtime::ASM::li(context->r4, 0x1f0);
/*801338D4 001306D4*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*801338D8 001306D8*/ PPC::Runtime::ASM::bl(fn_801396E4);
/*801338DC 001306DC*/ PPC::Runtime::ASM::bl(fn_8013AB88);
/*801338E0 001306E0*/ PPC::Runtime::ASM::bl(fn_8014DDEC);
/*801338E4 001306E4*/ PPC::Runtime::ASM::bl(fn_8014DF2C);
/*801338E8 001306E8*/ PPC::Runtime::ASM::bl(fn_8014E19C);
/*801338EC 001306EC*/ PPC::Runtime::ASM::bl(fn_8014E3EC);
/*801338F0 001306F0*/ PPC::Runtime::ASM::bl(fn_8014E888);
/*801338F4 001306F4*/ PPC::Runtime::ASM::bl(fn_8014EC10);
/*801338F8 001306F8*/ PPC::Runtime::ASM::bl(fn_8014EEBC);
/*801338FC 001306FC*/ PPC::Runtime::ASM::bl(fn_8016180C);
/*80133900 00130700*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80133904 00130704*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80133908 00130708*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013390C 0013070C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80133910 00130710*/ PPC::Runtime::ASM::blr();
}