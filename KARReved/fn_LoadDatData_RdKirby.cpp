//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetStageKind_4c?.hpp"
#include "fn_stGetStageKind_54?.hpp"
#include "fn_8019065C.hpp"
#include "fn_8019065C.hpp"
#include "fn_stGetStageKind_50?.hpp"
#include "fn_8019065C.hpp"



void fn_LoadDatData_RdKirby(PPC::Runtime::GCContext* context)
{
/*80192C58 0018FA58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80192C5C 0018FA5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80192C60 0018FA60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192C64 0018FA64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80192C68 0018FA68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80192C6C 0018FA6C*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_4c?);
/*80192C70 0018FA70*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80192C74 0018FA74*/ PPC::Runtime::ASM::beq(.L_80192CFC);
/*80192C78 0018FA78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80192C7C 0018FA7C*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_54?);
/*80192C80 0018FA80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80192C84 0018FA84*/ PPC::Runtime::ASM::beq(.L_80192CC4);
/*80192C88 0018FA88*/ PPC::Runtime::ASM::lis(context->r3, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_HighBit);
/*80192C8C 0018FA8C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_LowBit);
/*80192C90 0018FA90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80192C94 0018FA94*/ PPC::Runtime::ASM::bl(fn_8019065C);
/*80192C98 0018FA98*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*80192C9C 0018FA9C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*80192CA0 0018FAA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80192CA4 0018FAA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80192CA8 0018FAA8*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80192CAC 0018FAAC*/ PPC::Runtime::ASM::beq(.L_80192CFC);
/*80192CB0 0018FAB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80192CB4 0018FAB4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80192CB8 0018FAB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80192CBC 0018FABC*/ PPC::Runtime::ASM::bctrl();
/*80192CC0 0018FAC0*/ PPC::Runtime::ASM::b(.L_80192CFC);
RUNTIME_PPC_JUMP_LABEL(.L_80192CC4, 0x80192CC4) //this is a jump label
/*80192CC4 0018FAC4*/ PPC::Runtime::ASM::lis(context->r3, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_HighBit);
/*80192CC8 0018FAC8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_LowBit);
/*80192CCC 0018FACC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80192CD0 0018FAD0*/ PPC::Runtime::ASM::bl(fn_8019065C);
/*80192CD4 0018FAD4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*80192CD8 0018FAD8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*80192CDC 0018FADC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80192CE0 0018FAE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80192CE4 0018FAE4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80192CE8 0018FAE8*/ PPC::Runtime::ASM::beq(.L_80192CFC);
/*80192CEC 0018FAEC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80192CF0 0018FAF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80192CF4 0018FAF4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80192CF8 0018FAF8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80192CFC, 0x80192CFC) //this is a jump label
/*80192CFC 0018FAFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80192D00 0018FB00*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_50?);
/*80192D04 0018FB04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80192D08 0018FB08*/ PPC::Runtime::ASM::beq(.L_80192D44);
/*80192D0C 0018FB0C*/ PPC::Runtime::ASM::lis(context->r3, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_HighBit);
/*80192D10 0018FB10*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_LowBit);
/*80192D14 0018FB14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80192D18 0018FB18*/ PPC::Runtime::ASM::bl(fn_8019065C);
/*80192D1C 0018FB1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*80192D20 0018FB20*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*80192D24 0018FB24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80192D28 0018FB28*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80192D2C 0018FB2C*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80192D30 0018FB30*/ PPC::Runtime::ASM::beq(.L_80192D44);
/*80192D34 0018FB34*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80192D38 0018FB38*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80192D3C 0018FB3C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80192D40 0018FB40*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80192D44, 0x80192D44) //this is a jump label
/*80192D44 0018FB44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192D48 0018FB48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80192D4C 0018FB4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80192D50 0018FB50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80192D54 0018FB54*/ PPC::Runtime::ASM::blr();
}