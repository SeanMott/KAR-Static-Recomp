//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"



void fn_emLoadCommon(PPC::Runtime::GCContext* context)
{
/*801FD580 001FA380*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FD584 001FA384*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FD588 001FA388*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1325 @ Get_MemoryOffset_HighBit);
/*801FD58C 001FA38C*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1326 @ Get_MemoryOffset_HighBit);
/*801FD590 001FA390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FD594 001FA394*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_1325 @ Get_MemoryOffset_LowBit);
/*801FD598 001FA398*/ PPC::Runtime::ASM::addi(context->r6, context->r5, MemoryOffset_1326 @ Get_MemoryOffset_LowBit);
/*801FD59C 001FA39C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801FD5A0 001FA3A0*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1805DD880 @ Get_MemoryOffset_SDA21);
/*801FD5A4 001FA3A4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801FD5A8 001FA3A8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801FD5AC 001FA3AC*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*801FD5B0 001FA3B0*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FD5B4 001FA3B4*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18055A228 @ Get_MemoryOffset_HighBit);
/*801FD5B8 001FA3B8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055A210 @ Get_MemoryOffset_HighBit);
/*801FD5BC 001FA3BC*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*801FD5C0 001FA3C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801FD5C4 001FA3C4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18055A228 @ Get_MemoryOffset_LowBit);
/*801FD5C8 001FA3C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055A210 @ Get_MemoryOffset_LowBit);
/*801FD5CC 001FA3CC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801FD5D0 001FA3D0*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FD5D4 001FA3D4*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801FD5D8 001FA3D8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801FD5DC, 0x801FD5DC) //this is a jump label
/*801FD5DC 001FA3DC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801FD5E0 001FA3E0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x7);
/*801FD5E4 001FA3E4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FD5E8 001FA3E8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801FD5EC 001FA3EC*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801FD5F0 001FA3F0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801FD5F4 001FA3F4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*801FD5F8 001FA3F8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801FD5FC 001FA3FC*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*801FD600 001FA400*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*801FD604 001FA404*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801FD608 001FA408*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801FD60C 001FA40C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*801FD610 001FA410*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*801FD614 001FA414*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1c);
/*801FD618 001FA418*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*801FD61C 001FA41C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x7);
/*801FD620 001FA420*/ PPC::Runtime::ASM::bdnz(.L_801FD5DC);
/*801FD624 001FA424*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18055A228 @ Get_MemoryOffset_HighBit);
/*801FD628 001FA428*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055A210 @ Get_MemoryOffset_HighBit);
/*801FD62C 001FA42C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055A210 @ Get_MemoryOffset_LowBit);
/*801FD630 001FA430*/ PPC::Runtime::ASM::slwi(context->r5, context->r7, 2);
/*801FD634 001FA434*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18055A228 @ Get_MemoryOffset_LowBit);
/*801FD638 001FA438*/ PPC::Runtime::ASM::subfic(context->r0, context->r7, 0x16);
/*801FD63C 001FA43C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r5);
/*801FD640 001FA440*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*801FD644 001FA444*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801FD648 001FA448*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x16);
/*801FD64C 001FA44C*/ PPC::Runtime::ASM::bge(.L_801FD664);
RUNTIME_PPC_JUMP_LABEL(.L_801FD650, 0x801FD650) //this is a jump label
/*801FD650 001FA450*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801FD654 001FA454*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*801FD658 001FA458*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FD65C 001FA45C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*801FD660 001FA460*/ PPC::Runtime::ASM::bdnz(.L_801FD650);
RUNTIME_PPC_JUMP_LABEL(.L_801FD664, 0x801FD664) //this is a jump label
/*801FD664 001FA464*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FD668 001FA468*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FD66C 001FA46C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FD670 001FA470*/ PPC::Runtime::ASM::blr();
}