//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80061620.hpp"
#include "fn_80061620.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_pauseRevertCamera.hpp"
#include "fn_8005E68C.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_pauseRevertCamera.hpp"
#include "fn_8005E68C.hpp"
#include "fn_playPauseSoundFX.hpp"
#include "fn_8005E650.hpp"
#include "fn_stopSoundEffect.hpp"



void fn_802C681C(PPC::Runtime::GCContext* context)
{
/*802C681C 002C361C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802C6820 002C3620*/ PPC::Runtime::ASM::mflr(context->r0);
/*802C6824 002C3624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C6828 002C3628*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802C682C 002C362C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802C6830 002C3630*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*802C6834 002C3634*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802C6838 002C3638*/ PPC::Runtime::ASM::beq(.L_802C6958);
/*802C683C 002C363C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802C6840 002C3640*/ PPC::Runtime::ASM::lis(context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*802C6844 002C3644*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*802C6848 002C3648*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*802C684C 002C364C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*802C6850 002C3650*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x44);
/*802C6854 002C3654*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802C6858 002C3658*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r4);
/*802C685C 002C365C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802C6860 002C3660*/ PPC::Runtime::ASM::and.(context->r0, context->r4, context->r0);
/*802C6864 002C3664*/ PPC::Runtime::ASM::beq(.L_802C6890);
/*802C6868 002C3668*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802C686C 002C366C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x2);
/*802C6870 002C3670*/ PPC::Runtime::ASM::bge(.L_802C6880);
/*802C6874 002C3674*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802C6878 002C3678*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802C687C 002C367C*/ PPC::Runtime::ASM::b(.L_802C6888);
RUNTIME_PPC_JUMP_LABEL(.L_802C6880, 0x802C6880) //this is a jump label
/*802C6880 002C3680*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802C6884 002C3684*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802C6888, 0x802C6888) //this is a jump label
/*802C6888 002C3688*/ PPC::Runtime::ASM::bl(fn_80061620);
/*802C688C 002C368C*/ PPC::Runtime::ASM::b(.L_802C68C4);
RUNTIME_PPC_JUMP_LABEL(.L_802C6890, 0x802C6890) //this is a jump label
/*802C6890 002C3690*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802C6894 002C3694*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*802C6898 002C3698*/ PPC::Runtime::ASM::and.(context->r0, context->r4, context->r0);
/*802C689C 002C369C*/ PPC::Runtime::ASM::beq(.L_802C68C4);
/*802C68A0 002C36A0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802C68A4 002C36A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802C68A8 002C36A8*/ PPC::Runtime::ASM::beq(.L_802C68B8);
/*802C68AC 002C36AC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802C68B0 002C36B0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802C68B4 002C36B4*/ PPC::Runtime::ASM::b(.L_802C68C0);
RUNTIME_PPC_JUMP_LABEL(.L_802C68B8, 0x802C68B8) //this is a jump label
/*802C68B8 002C36B8*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*802C68BC 002C36BC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802C68C0, 0x802C68C0) //this is a jump label
/*802C68C0 002C36C0*/ PPC::Runtime::ASM::bl(fn_80061620);
RUNTIME_PPC_JUMP_LABEL(.L_802C68C4, 0x802C68C4) //this is a jump label
/*802C68C4 002C36C4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802C68C8 002C36C8*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*802C68CC 002C36CC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*802C68D0 002C36D0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*802C68D4 002C36D4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*802C68D8 002C36D8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*802C68DC 002C36DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802C68E0 002C36E0*/ PPC::Runtime::ASM::andi.(context->r0, context->r3, 0x160);
/*802C68E4 002C36E4*/ PPC::Runtime::ASM::beq(.L_802C6934);
/*802C68E8 002C36E8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802C68EC 002C36EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*802C68F0 002C36F0*/ PPC::Runtime::ASM::beq(.L_802C6910);
/*802C68F4 002C36F4*/ PPC::Runtime::ASM::bge(.L_802C6918);
/*802C68F8 002C36F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*802C68FC 002C36FC*/ PPC::Runtime::ASM::bge(.L_802C6904);
/*802C6900 002C3700*/ PPC::Runtime::ASM::b(.L_802C6918);
RUNTIME_PPC_JUMP_LABEL(.L_802C6904, 0x802C6904) //this is a jump label
/*802C6904 002C3704*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802C6908 002C3708*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*802C690C 002C370C*/ PPC::Runtime::ASM::b(.L_802C6918);
RUNTIME_PPC_JUMP_LABEL(.L_802C6910, 0x802C6910) //this is a jump label
/*802C6910 002C3710*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802C6914 002C3714*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802C6918, 0x802C6918) //this is a jump label
/*802C6918 002C3718*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802C691C 002C371C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802C6920 002C3720*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*802C6924 002C3724*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*802C6928 002C3728*/ PPC::Runtime::ASM::bl(fn_pauseRevertCamera);
/*802C692C 002C372C*/ PPC::Runtime::ASM::bl(fn_8005E68C);
/*802C6930 002C3730*/ PPC::Runtime::ASM::b(.L_802C69D0);
RUNTIME_PPC_JUMP_LABEL(.L_802C6934, 0x802C6934) //this is a jump label
/*802C6934 002C3734*/ PPC::Runtime::ASM::andi.(context->r0, context->r3, 0x1200);
/*802C6938 002C3738*/ PPC::Runtime::ASM::beq(.L_802C69D0);
/*802C693C 002C373C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802C6940 002C3740*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*802C6944 002C3744*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802C6948 002C3748*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*802C694C 002C374C*/ PPC::Runtime::ASM::bl(fn_pauseRevertCamera);
/*802C6950 002C3750*/ PPC::Runtime::ASM::bl(fn_8005E68C);
/*802C6954 002C3754*/ PPC::Runtime::ASM::b(.L_802C69D0);
RUNTIME_PPC_JUMP_LABEL(.L_802C6958, 0x802C6958) //this is a jump label
/*802C6958 002C3758*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802C695C 002C375C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802C6960 002C3760*/ PPC::Runtime::ASM::bne(.L_802C69D0);
/*802C6964 002C3764*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*802C6968 002C3768*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*802C696C 002C376C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*802C6970 002C3770*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802C6974 002C3774*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C6978 002C3778*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_802C697C, 0x802C697C) //this is a jump label
/*802C697C 002C377C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802C6980 002C3780*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x58);
/*802C6984 002C3784*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*802C6988 002C3788*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*802C698C 002C378C*/ PPC::Runtime::ASM::bne(.L_802C69C4);
/*802C6990 002C3790*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r6, 24);
/*802C6994 002C3794*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*802C6998 002C3798*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*802C699C 002C379C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802C69A0 002C37A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802C69A4 002C37A4*/ PPC::Runtime::ASM::beq(.L_802C69C4);
/*802C69A8 002C37A8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802C69AC 002C37AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*802C69B0 002C37B0*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802C69B4 002C37B4*/ PPC::Runtime::ASM::bl(fn_playPauseSoundFX);
/*802C69B8 002C37B8*/ PPC::Runtime::ASM::bl(fn_8005E650);
/*802C69BC 002C37BC*/ PPC::Runtime::ASM::bl(fn_stopSoundEffect);
/*802C69C0 002C37C0*/ PPC::Runtime::ASM::b(.L_802C69D0);
RUNTIME_PPC_JUMP_LABEL(.L_802C69C4, 0x802C69C4) //this is a jump label
/*802C69C4 002C37C4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x9);
/*802C69C8 002C37C8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*802C69CC 002C37CC*/ PPC::Runtime::ASM::bdnz(.L_802C697C);
RUNTIME_PPC_JUMP_LABEL(.L_802C69D0, 0x802C69D0) //this is a jump label
/*802C69D0 002C37D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C69D4 002C37D4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*802C69D8 002C37D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802C69DC 002C37DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802C69E0 002C37E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802C69E4 002C37E4*/ PPC::Runtime::ASM::blr();
}