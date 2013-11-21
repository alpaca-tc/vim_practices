group :vim3 do
  guard :shell do
    target_dir = 'vim-3\.0/src'
    watch(%r!^#{target_dir}/(.+)\.(c|h)!) do
      `cd #{target_dir} && make`
      `cd #{target_dir} && make debug`
    end
  end

  notification :tmux, display_message: true, color_location: 'status-left-bg'
end
