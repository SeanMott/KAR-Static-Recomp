//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stateReadingFST.hpp"
#include "fn_stateReadingFST.hpp"
#include "fn_OSPanic.hpp"
#include "fn_cbForStateReadingFST.hpp"
#include "fn_cbForStateReadingFST.hpp"
#include "fn_DVDLowRead.hpp"



void fn_stateReadingFST(PPC::Runtime::GCContext* context)
{
/*803C5848 003C2648*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C584C 003C264C*/ PPC::Runtime::ASM::lis(context->r3, fn_stateReadingFST @ Get_MemoryOffset_HighBit);
/*803C5850 003C2650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C5854 003C2654*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_stateReadingFST @ Get_MemoryOffset_LowBit);
/*803C5858 003C2658*/ PPC::Runtime::ASM::lis(context->r3, BB2_8056CC20 @ Get_MemoryOffset_HighBit);
/*803C585C 003C265C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C5860 003C2660*/ PPC::Runtime::ASM::addi(context->r3, context->r3, BB2_8056CC20 @ Get_MemoryOffset_LowBit);
/*803C5864 003C2664*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C5868 003C2668*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x8);
/*803C586C 003C266C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDDEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C5870 003C2670*/ PPC::Runtime::ASM::lwz(context->r4, bootInfo_805DDDB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C5874 003C2674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C5878 003C2678*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*803C587C 003C267C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803C5880 003C2680*/ PPC::Runtime::ASM::bge(.L_803C589C);
/*803C5884 003C2684*/ PPC::Runtime::ASM::lis(context->r3, String_ "DVDChangeDisk()_FSTInTheNewDiscIsTooBi" Get_MemoryOffset_HighBit);
/*803C5888 003C2688*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C588C 003C268C*/ PPC::Runtime::ASM::addi(context->r5, context->r3, String_ "DVDChangeDisk()_FSTInTheNewDiscIsTooBi" Get_MemoryOffset_LowBit);
/*803C5890 003C2690*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1296 @ Get_MemoryOffset_SDA21);
/*803C5894 003C2694*/ PPC::Runtime::ASM::li(context->r4, 0x287);
/*803C5898 003C2698*/ PPC::Runtime::ASM::bl(fn_OSPanic);
RUNTIME_PPC_JUMP_LABEL(.L_803C589C, 0x803C589C) //this is a jump label
/*803C589C 003C269C*/ PPC::Runtime::ASM::lis(context->r3, BB2_8056CC20 @ Get_MemoryOffset_HighBit);
/*803C58A0 003C26A0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C58A4 003C26A4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, BB2_8056CC20 @ Get_MemoryOffset_LowBit);
/*803C58A8 003C26A8*/ PPC::Runtime::ASM::lwz(context->r7, bootInfo_805DDDB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C58AC 003C26AC*/ PPC::Runtime::ASM::lis(context->r4, fn_cbForStateReadingFST @ Get_MemoryOffset_HighBit);
/*803C58B0 003C26B0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803C58B4 003C26B4*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x1f);
/*803C58B8 003C26B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r7));
/*803C58BC 003C26BC*/ PPC::Runtime::ASM::addi(context->r6, context->r4, fn_cbForStateReadingFST @ Get_MemoryOffset_LowBit);
/*803C58C0 003C26C0*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r0, 5);
/*803C58C4 003C26C4*/ PPC::Runtime::ASM::bl(fn_DVDLowRead);
/*803C58C8 003C26C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C58CC 003C26CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C58D0 003C26D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C58D4 003C26D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C58D8 003C26D8*/ PPC::Runtime::ASM::blr();
}